/*
 * @Date: 2020-07-08 16:42:50
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 18:02:34
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int cnt = 0;
    int x = 2;
    int t = 0;
  
    while (cnt < b)
    {
        int i;
        int isPrime = 1;  // =1时为素数， =0时不为素数
        for ( i = 2; i < x; i++)
        {
            if (x%i == 0)
            {
                isPrime = 0;
                break;
            }
                
        }
        if (isPrime == 1)
        {
            cnt++;
            while (cnt >= a) {
                t += x;
                break;
            }
        }
        x++;
    }

    printf("%d\n", t);

    return 0;
}