/*
 * @Date: 2020-07-08 15:34:16
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:42:14
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 找出1-100中的素数

#include <stdio.h>
int main()
{
    int x;
    
    for ( x = 2; x < 100; x++)
    {
        int i;
        int isPrime = 1;
        for ( i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 1;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", x);
        }
    }

    printf("\n");
    return 0;
    
}