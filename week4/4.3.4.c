/*
 * @Date: 2020-07-08 16:33:48
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:37:21
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 计算分数累加

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i;
    double ret = 0.0;
    for ( i = 1; i <= n; i++)
    {
        ret += 1.0/i;
    }
    printf("%f\n", ret);

    return 0;
}