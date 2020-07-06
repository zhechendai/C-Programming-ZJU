/*
 * @Date: 2020-07-06 22:44:16
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 22:46:45
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    printf("请输入月份数：");
    int month = 0;
    scanf("%d", &month);

    switch (month)
    {
    case 1: printf("January\n"); break;
	case 2: printf("February\n"); break;
	case 3: printf("March\n"); break;
	case 4: printf("April\n"); break;
	case 5: printf("May\n"); break;
	case 6: printf("June\n"); break;
	case 7: printf("July\n"); break;
	case 8: printf("August\n"); break;
	case 9: printf("September\n"); break;
	case 10:printf("October\n"); break;
	case 11:printf("November\n"); break;
	case 12:printf("December\n"); break;
	}

	return 0;
}
