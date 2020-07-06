/*
 * @Date: 2020-07-06 20:47:31
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 20:51:22
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;

    printf("请输入两个数：");
    scanf("%d %d", &a, &b);

    int max = b;

    if(max < a){
        max = a;
    }

    printf("大的那个是%d\n", max);

    return 0;

}