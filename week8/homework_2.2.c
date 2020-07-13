/*
 * @Date: 2020-07-13 18:14:08
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-13 18:14:30
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
#include <string.h>
//gps数据处理 
//$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50

void gps(char a[] , int time[]);   //声明函数 
int main(int argc , const char*argv[]){
	char word[1000];       //定义一个数组，存放GPS数据 
	int time[3]={0};       //定义一个时间数组 
	char end[]="END";      //输出END表示结束 
	
do{                             //采用do-while循环，先输入再判断 
	scanf("%s",word);           //输入gps数据 
	gps(word,time);             //调用gps函数 
}while(strcmp(end,word)!=0);    //比较字符串，是否相等。相等即为END 
	printf("%02d:%02d:%02d",time[0],time[1],time[2]);   //输出两位数字，当不足两位，则用0补齐 
	return 0;	
}
void gps(char a[] , int time[]){    // 定义一个函数，参数表是一个字符数组，一个是int数组 
	int i ;                         
	int sum = 0;                   //定义异或值为0； 
	if(a[0]=='$'&&a[1]=='G'&&a[2]=='P'&&a[3]=='R'&&a[4]=='M'&&a[5]=='C'&&a[6]!='\0'){
//先判断gps数据类型是否为$GPRMC 
		for(i=1;a[i]!='*';i++){
			sum = sum ^ a[i];     //0^任何数=任何数
		//处理$和*之间所有字符异或 
		}
		
		char c1,c2;        //定义两个变量处理*后两个字符 
		int x1,x2,mask;   //将校验值从十六进制转换成十进制 
		c1=a[i+1];c2=a[i+2];
		if(c1>='A'&&c1<='F'){    //将校验值用int储存 
			x1 = 10+(c1-'A');
		}else x1 = c1 - '0';
		if(c2>='A'&&c2<='F'){
			x2 = 10+(c2-'A');
		}else x2 = c2 - '0';
		mask = 16*x1+x2;       
//找出状态值 
		for(i=7;a[i]!='*';i++){       
			if(a[i]==',')break;
		}
		if(a[i+1]=='A'&&sum==mask){
			int hour = (a[7]-'0')*10+a[8]-'0';
			hour = (hour + 8)%24;   //utc时间换成北京时间 
			time[0]=hour;    //小时 
			time[1]=(a[9]-'0')*10+(a[10]-'0');   //分钟 
			time[2]=(a[11]-'0')*10+(a[12]-'0');  //秒 
		}
	}	
}
