/*
 * @Date: 2020-07-08 15:26:18
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 15:27:24
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 凑硬币
// 输出一种结果（使用goto直接跳出循环）

#include <stdio.h>
int main()
{
    printf("please type your price:");
    int x;
    scanf("%d", &x);
    int one, two, five;

    for ( one = 1; one < x*10; one++)
    {
        for ( two = 1; two < x*10/2; two++)
        {
            for ( five = 1; five < x*10/5; five++)
            {
                if (one + two*2 + five*5 == x*10)
                {
                    printf("%d元等于%d个一角和%d个二角和%d个五角。\n", x, one, two, five);
                    goto out;
                }
                
            }
            
        }
        
    }
    out:
    return 0;
}