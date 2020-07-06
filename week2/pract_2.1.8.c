/*
 * @Date: 2020-07-06 21:01:26
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 21:12:55
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;

    printf("please enter your working hours:");
    scanf("%d", &hours);
    printf("your working hours is %d.\n", hours);

    if(hours > STANDARD){
        pay = STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
    }else
    {
        pay = hours*RATE;
    }

    printf("your payment is %f.\n", pay);

    return 0;

}