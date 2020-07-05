/*
 * @Date: 2020-07-05 14:56:20
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 15:02:32
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    printf("Please enter your height in foot and inch respectively, like 5foot 7inch, your enter is 5 7:");

    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("Your height in meters is %f.\n", ((foot + inch / 12) * 0.3048));

    return 0;
}