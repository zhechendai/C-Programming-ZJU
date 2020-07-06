/*
 * @Date: 2020-07-06 22:36:25
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 22:42:44
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    printf("please enter your grade(1-100):");
    int grade;
    scanf("%d", &grade);

    grade /= 10;

    switch (grade)
    {
    case 10: //这里后面接的是冒号
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("E\n");
        break;
    }
}