/*
 * @Date: 2020-07-12 19:57:08
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-12 20:10:38
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 投票统计
#include <stdio.h>

int main()
{
    const int number = 10;    // 数组大小
    int x;
    int count[number];
    int i;

    for ( i = 0; i < number; i++)
    {
        count[i] = 0;                // 初始化数组
    }

    scanf("%d", &x);
    while (x!=-1)
    {
        if (x>=0 && x<=9)
        {
            count[x]++;              // 记录同一个数的数量
        }
        scanf("%d", &x);
    }
                                    // 遍历数组输出
    for ( i = 0; i < number; i++)
    {
        printf("%d:%d\n", i, count[i]);
    }
    
    return 0;

}