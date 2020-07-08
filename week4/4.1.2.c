/*
 * @Date: 2020-07-08 15:20:54
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 15:26:02
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 凑硬币
// 输出一结果（使用break一级一级跳出循环）

#include <stdio.h>
int main()
{
    printf("please type your price:");
    int x;
    scanf("%d", &x);
    int one, two, five;
    int exit =0; // 定义一个判断子

    for ( one = 1; one < x*10; one++)                   // 1号循环
    {
        for ( two = 1; two < x*10/2; two++)             // 2号循环
        {
            for ( five = 1; five < x*10/5; five++)      // 3号循环
            {
                if (one + two*2 + five*5 == x*10)
                {
                    printf("%d元等于%d个一角和%d个二角和%d个五角。\n", x, one, two, five);
                    exit = 1;
                    break;       // 跳出3号循环
                }
                
            }
            if (exit == 1)
            {
                break;           // 跳出2号循环
            }
            
        }
        if (exit == 1)
        {
            break;               // 跳出1号循环
        }
        
    }
    return 0;
}