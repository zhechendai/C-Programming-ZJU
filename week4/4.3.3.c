/*
 * @Date: 2020-07-08 16:26:14
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:33:07
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 整数分解

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int t = x;
    int mask = 1;

    while (t>9)
    {
        mask *= 10;
        t /= 10;
    }

    do
    {
        int d = x/mask;
        printf("%d", d);
        if (mask > 9)
        {
            printf(" ");
        }
        x %= mask;
        mask /=10;
    } while (mask > 0);
    printf("\n");
    
    return 0;
}