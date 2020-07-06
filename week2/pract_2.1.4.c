/*
 * @Date: 2020-07-06 20:42:25
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 20:45:04
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    // 初始化
    int price = 0;
    int bill = 0;

    // 读入金额和票面
    printf("请输入金额：");
    scanf("%d", &price);

    printf("请输入票面：");
    scanf("%d", &bill);

    // 计算找零
    if(bill > price){
        printf("应该找您%d.\n", bill-price);
    }else
    {
        printf("你的钱不够。\n");   // 加入else（否则），不满足运算关系时（运算关系返回为0时），执行这里的内容
    }
    

    return 0;
}