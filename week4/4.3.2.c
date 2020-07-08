/*
 * @Date: 2020-07-08 16:21:46
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:24:37
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// find gcd 辗转相除法

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int t;
    while (b != 0)
    {
        t = a%b;
        a = b;
        b = t;
    }
    printf("the gcd is %d\n", a);

    return 0;
}