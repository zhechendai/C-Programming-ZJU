/*
 * @Date: 2020-07-05 16:01:03
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 16:09:28
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// calculate the average value

#include <stdio.h>
int main()
{
    int a;
    int b;
    
    printf("Please enter the numbers:");

    scanf("%d %d", &a, &b); // scanf()中浮点数表示为 %lf

    double c = (a+b)/2.0; //除法运算时要注意小数问题，数据类型需要改为浮点行

    printf("The average value is between %d and %d is %f.\n", a, b, c); // printf()中浮点数表示为 %f

    return 0;
}