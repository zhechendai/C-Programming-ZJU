/*
 * @Date: 2020-07-05 13:01:39
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 13:06:28
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    int price = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);

    int change = 100 - price;
    
    printf("找您%d元。\n", change);

    return 0;
}