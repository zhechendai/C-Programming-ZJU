/*
 * @Date: 2020-07-07 15:32:18
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 16:05:50
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>

int main()
{
    int number;
    int counteven = 0;
    int countodd = 0;
    
    scanf("%d", &number);
    while (number != -1)
    {
        if(number >=100000)
        {
            printf("you enter wrong!");
        }else if (number <= 0)
        {
            printf("you enter wrong!");
        }else if ( number%2 == 0 ) //判断是否为偶数
        {
            counteven++;
        }else
        {
            countodd++;
        }
        
        scanf("%d", &number);
    }
    
    printf("%d %d\n", countodd, counteven);

    return 0;
}