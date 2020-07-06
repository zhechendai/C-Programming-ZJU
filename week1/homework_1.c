/*
 * @Date: 2020-07-05 16:39:57
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 17:56:47
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

// 第二位数获得，除上述方法
// 对原数%100取余，再/10
// 对原数/10，再%10取余