/*
 * @Date: 2020-07-05 15:51:00
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 16:00:25
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

//计算时间差

#include <stdio.h>
int main()
{
    int hour1, minute1;
    int hour2, minute2;
    
    printf("Please enter 2 time varients in hour and minutes respectively:");

    scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);
    
    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;
    int t = t2 - t1;

    printf("The time difference is %d hour, %d minutes.\n", t / 60, t % 60);

    return 0;
}