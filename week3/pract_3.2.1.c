/*
 * @Date: 2020-07-07 14:53:19
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 14:57:35
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// calculate average

#include <stdio.h>

int main()
{
    int sum = 0;
    int count = 0;
    int number;

    scanf("%d", &number);
    while (number != -1)
    {
        sum += number;
        count++;
        scanf("%d", &number);
    }

    double avg = sum/count;

    printf("the average is %f\n", avg);

    return 0;
    
}