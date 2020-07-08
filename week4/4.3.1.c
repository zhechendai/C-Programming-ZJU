/*
 * @Date: 2020-07-08 16:12:17
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:21:13
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// find gcd 枚举法

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int min;

    if (a<b)
    {
        min = a;
    }else
    {
        min = b;
    }

    int i, ret;
    for ( i = 2; i < min; i++)
    {
        if (a % i ==0)
        {
            if (b % i ==0)
            {
                ret = i;    //输出的是最后的i值，所以是最大公约数
            }
            
        }
        
    }
    
    printf("gcd is %d\n", ret);

    return 0;
    
}