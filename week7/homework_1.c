/*
 * @Date: 2020-07-12 20:16:18
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-12 20:46:55
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 多项式加法


//要注意的几点：
//1.幂次为1时,幂次不用输出
//2.幂次为零时,只需输出系数 
//3.所有的多项式系数都为0,则输出0
//4.系数为1时无需输出
 
#include <stdio.h>
 
int main()
{
	//初始化一个长度为101的数组，数组的下标表示幂次，下标对应的值为该幂次所对应的系数 ，a[3]表示幂次为3的系数 
	int a[101] = {0}; 
	//接受第1个多项式 
	int m, n;
	scanf("%d %d", &m, &n);
	while(m != 0){
		a[m] = a[m] + n;
		scanf("%d %d", &m, &n);
	}
	a[0] = a[0] + n;
	
	//接受第2个多项式 
	scanf("%d %d", &m, &n);
	while(m != 0){
		a[m] = a[m] + n;
		scanf("%d %d", &m, &n);
	}
	a[0] = a[0] + n;
	
	int i;
    int k = 0, flag = 1; //k用来阻止第一次输出+号， flag表示判断多项式的系数是否都为0，默认都为0 
    //从最高项开始遍历，即倒着遍历 
	for (i = sizeof(a)/sizeof(a[0]) - 1; i >= 0 ; i--) {
		if (a[i] != 0) {
			flag = 0; //进入即表示多项式存在系数不为0的项，置0 
			if(k){
				if (a[i] > 0) {
					printf("+");
				} 		
			}
			k = 1;	//置1表示从第二次开始就需要判断是否输出+号 
			if (i == 1) { //幂次为1时,幂次不用输出 
				if (a[i] != 1) { //系数不为1 
					printf("%dx", a[i]);
				} else { //系数为1 
					printf("x");
				}
			} else if (i == 0) { //幂次为零时,只需输出系数 
				printf("%d", a[i]);
			} else {
				if (a[i] != 1) {                         //系数不为1  
					printf("%dx%d", a[i], i);
				} else {                                 //系数为1  
					printf("x%d", i);
				}
			}	
		}	
    }
    if (flag) { //所有的多项式系数都为0,则只输出0 
    	printf("0");
	}
	return 0;

}