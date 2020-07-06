/*
 * @Date: 2020-07-06 22:50:31
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 01:01:48
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    int bjt = 0;
    int utc = 0;

    printf("please enter BJT time:");
    scanf("%d", &bjt);

    int hour1, minute1;
    int hour2, minute2;

    hour1 = bjt/100;
    minute1 = bjt%100;

    if(bjt > 2359){
        printf("your time is wrong\n");
    }else if (bjt < 0){
        printf("your time is wrong\n");
    }else  
    {
        if(hour1-8 > 0){
            hour2 = hour1-8;
        }
        else if (hour1-8+24 == 24)
        {
            hour2 = 0;
        }
        else{
            hour2 = hour1-8+24;
        }
                
        minute2 = minute1; //其实可以不需要定义变量minute2，因为只涉及到小时计算
        utc = hour2*100+minute2;

        printf("the UTC time is %d\n", utc);
    
    }
    
    return 0;
    
}