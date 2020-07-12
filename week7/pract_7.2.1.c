/*
 * @Date: 2020-07-12 20:05:04
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-12 20:15:39
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 构造素数表

#include <stdio.h>

int main()
{
    const int maxNumber = 10;
    int isPrime[maxNumber];
    int i;
    int x;

    for ( i = 0; i < maxNumber; i++)
    {
        isPrime[i] = 1;
    }
    
    for ( x = 2; x < maxNumber; x++)
    {
        if (isPrime[x])
        {
            for ( i = 2; i < maxNumber; i++)
            {
                isPrime[i*x] = 0;
            }
            
        }
        
    }
    for ( i = 2; i < maxNumber; i++)
    {
        if (isPrime[i])
        {
            printf("%d\t", i);
        }
        
    }
    printf("\n");
    
    return 0;
}