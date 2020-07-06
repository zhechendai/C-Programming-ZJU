/*
 * @Date: 2020-07-06 20:45:33
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 20:46:25
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 计算时间差
#include <stdio.h>
int main()
{
    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);

    int ih = hour2-hour1;
    int im = minute2-minute1;

    if(im < 0){
        im = 60+im;
        ih --;
    }

    printf("The time interval is %d hour %d minutes.\n", ih, im);

    return 0;
}