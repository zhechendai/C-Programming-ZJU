/*
 * @Date: 2020-07-08 15:49:25
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 17:59:52
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 找出前50个素数

#include <stdio.h>
int main()
{
    int x;
    int cnt = 0;
    x = 2;

    while (cnt<50)
    {
        int i;
        int isPrime = 1;   // =1时为素数
        for ( i = 2; i < x; i++)
        {
            if (x%i == 0)
            {
                isPrime =0;
                break;
            }
            
        }
        if (isPrime == 1)
        {
            cnt++;
            printf("%d ", x);

            if (cnt%5 == 0)
            {
                printf("\n");
            }
            
        }
        x++;
        
    }
    
    return 0;
}

// 第二种方法

// #include <stdio.h>
// int main()
// {
//     int x;
//     int cnt = 0;

//     for ( x = 2; cnt < 50; x++)
//     {
//         int i;
//         int isPrime = 1;
//         for ( i = 2; i < x; i++)
//         {
//             if ( x%i == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }            
//         }
//         if (isPrime == 1)
//         {
//             printf("%d ", x);
//             cnt++;
//             if (cnt%5 == 0)
//             {
//                 printf("\n");
//             }           
//         }       
//     }   
// }