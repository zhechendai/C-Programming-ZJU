/*
 * @Date: 2020-07-10 14:14:53
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-10 14:52:40
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 分解质因数
#include <stdio.h>

// function
// int isPrime(int i)
// {
//     int ret = 1;
//     int k;
//     for ( k = 2; k < i; k++)
//     {
//         if (i%k==0)
//         {
//             ret = 0;
//             break;
//         }       
//     }
//     return ret;
// }

int isPrime(int i);  // 定义函数原型

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n>2 && n<100000){
        if (isPrime(n))
        {
            printf("%d\n", n);
        }else
        {
            printf("%d=", n);
            int i;
            for ( i = 2; i < n; i++)
            {
                while (n!=i)
                {
                    if(n%i==0){
                        printf("%d*", i);
                        n /=i;
                    }else
                    {
                        break;
                    }
                }    
            }
            printf("%d\n",n);
        }
    }else
    {
        printf("wrong number\n");
    }
    
    return 0;
}


// function
int isPrime(int i)
{
    int ret = 1;
    int k;
    for ( k = 2; k < i; k++)
    {
        if (i%k==0)
        {
            ret = 0;
            break;
        }       
    }
    return ret;
}