/*
 * @Date: 2020-07-08 15:28:37
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 15:33:26
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 判断是否为素数

#include <stdio.h>
int main()
{
    int x;
    printf("please type the number:");
    scanf("%d", &x);

    int i;
    int isPrime = 1; //判断子

    for ( i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
        }
        
    }
    if (isPrime == 1)
    {
        printf("is prime\n");
    }else
    {
        printf("not prime\n");
    }
    
    return 0;
    
}