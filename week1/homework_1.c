/*
 * @Date: 2020-07-05 16:39:57
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 16:48:14
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 逆序的三位数

#include <stdio.h>
int main()
{
    int input;
    printf("please enter the number:");

    scanf("%d", &input);

    int a = input%10;
    int b = input/100;
    int c = input-(b*100+a);

    int output = a*100+c+b;

    printf("The output is %d\n", output);

    return 0;
}