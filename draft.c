/*
 * @Date: 2020-07-05 14:31:56
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:07:47
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// find prime from 1-100

#include <stdio.h>
int main()
{
    int x;
    // x = 2;                          while 条件
    int cnt = 0;
    // for (x = 2; x < 100; x++)
    // while (cnt < 50)                while条件
    for (x = 2; cnt < 50; x++)       //while可以使用for来替代
    {
        int i;
        int isPrime = 1;  // is prime
        for ( i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }    
        }
        if (isPrime == 1)
        {
            printf("%d ", x);
            cnt++;
        }
        // x++;                        while条件
    }
    printf("\n");

    return 0;
}


