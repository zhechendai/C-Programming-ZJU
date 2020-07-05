/*
 * @Date: 2020-07-05 14:50:20
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 14:55:24
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    const int AMOUNT = 100; //定义常数变量， 一般常数变量使用大写
    int price = 0;

    printf("please enter the price:");
    scanf("%d", &price);

    int change = AMOUNT - price;

    printf("the change is %d.\n", change);

    return 0;
}