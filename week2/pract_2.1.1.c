/*
 * @Date: 2020-07-06 20:29:48
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 20:34:28
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    const int MINOR = 35;
    int age = 0;

    printf("请输入你的年龄：");
    scanf("%d", &age);

    printf("您的年龄是%d.\n", age);

    if ( age < MINOR ){
        printf("年轻是美好的，");
    }
    printf("年龄决定了你的精神世界，好好珍惜吧。\n");

    return 0;
}