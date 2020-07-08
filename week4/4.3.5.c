/*
 * @Date: 2020-07-08 16:37:52
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 16:40:49
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 计算正负交替分数累加

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i;
    double ret = 0.0;
    double sign = 1.0;    // 定义一个正负判断子
    for ( i = 1; i <= n; i++)
    {
        ret += sign/i;    // sign是1.0，为double类型，可以省去原来用来表明做浮点运算的1.0
        sign = -sign;
    }
    printf("%f\n", ret);

    return 0;
}