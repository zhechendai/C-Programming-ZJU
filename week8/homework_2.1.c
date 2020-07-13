/*
 * @Date: 2020-07-13 18:12:26
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-13 18:12:45
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
#include <string.h>
#include <math.h> 

int fun(char *s);		//十六进制转换 
int GPS(int A[]);		//目标函数； 

int main(){
	int a[3]={0},i=0,flag=0; //a数组用作储存时间；
	while(flag!=-1){				//若GPS函数返回的标记不为-1，则继续读入语句；
		flag=GPS(a);				//调用函数的同时赋值给标记；
	}	
	printf("%02d:%02d:%02d",a[0],a[1],a[2]);	
	return 0; 
}

int fun(char *s)		//十六进制转换 
{
	int i,t;             //t记录临时加的数 
	long sum =0;
	for(i=0;i<2;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		t=s[i]-'0';       			//当字符是0~9时保持原数不变
		if(s[i]>='a'&&s[i]<='z')
		t=s[i]-'a'+10;
		if(s[i]>='A'&&s[i]<='Z')
		t=s[i]-'A'+10;
		sum=sum*16+t;
	}
	return sum;
 } 

int GPS(int A[]){				//目标函数； 
	char *w ="$GPRMC";			//字段0;
	char *z ="END";				//结束语句;
	char p[100];				//储存读入字符串的char型数组;
	char q[10];					//用作读取校验值的char型数组;
	int i=2,j=(int)w[1]^w[2],cnt=0,k=1,flag=1;	//j函数先计算,因为前两个字符已经确定,i也随之取2;
	int B[3]={0};									//储存时间的辅助数组;
	scanf("%s",&p);									//读取字符串
	if(!strncmp(w,p,6)){							//检查是否为$GPRMC语句;
		while(p[i]!='*'){							//遍历字符串;
			if(p[i+1]!='*'){		//判定当前字符的下一个字符不为*号时，做异或运算； 
				j=j^p[i+1];
				if(p[i]==','&&cnt<2){			//检查分隔符；
					cnt++;
					if(cnt==1){					//遇到第一个分隔符,即遇到了时间字段;
						int b=0;
						for(k=1;k<=5;k+=2){
							B[b++]=(p[i+k]-'0')*10+p[i+k+1]-'0';  //记录时间在一个辅助数组中 
						}
					}
					if(cnt==2){						//遇到第二个分隔符,即遇到了定位字段;
						if(p[i+1]=='V') {			//未定位文本不再判断； 
							flag=0;
							break;
						}
					} 
				
				}
			i++; 
			}else if(p[i+1]=='*'){		//下一个字符串为*号,作异或运算最后一部,并准备检查校验值;
					j=j%65536;
					i+=2;
					strcpy(q,p+i);		//将*号后的十六进制数复制到q子串中; 
					break;
				}
			
		}
		
	}else if(!strncmp(z,p,3)) flag=-1;	//若读入的是END，设标记为-1； 
			else flag=0;				//读入的字符串不符合要求，设标记为0； 
	
	if(flag!=0){
		int b=0;
		if(fun(q)==j){			//判断校验值;
			for(b=0;b<3;b++){	//将时间传入主函数内的数组; 
				A[b]=B[b];
				if(b==0) A[b]=(A[b]+8)%24; //时区转换； 
			}	
		}

	}
	return flag;
}
