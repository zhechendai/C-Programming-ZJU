/*
 * @Date: 2020-07-06 23:15:40
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 01:18:47
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    printf("please enter radio code:");
    int code = 0;
    scanf("%d", &code);

    int r = code/10;
    int s = code%10;

    if(code < 11){
        printf("your code is wrong!\n");
    }else if (code > 59)
    {
        printf("your code is wrong!\n");
    }else
    {

        switch (s)
        {
        case 1: printf("Faint signals, barely perceptible,"); break;
        case 2: printf("Very weak signals,"); break;
        case 3: printf("Weak signals,"); break;
        case 4: printf("Fair signals,"); break;
        case 5: printf("Fairly good signals,"); break;
        case 6: printf("Good signals,"); break;
        case 7: printf("Moderately strong signals,"); break;
        case 8: printf("Strong signals,"); break;
        case 9: printf("Extremely strong signals,"); break;
        }

        switch (r)
        {
        case 1: printf("Unreadable.\n"); break;
        case 2: printf("Barely readable, occasional words distinguishable.\n"); break;
        case 3: printf("Readable with considerable difficulty.\n"); break;
        case 4: printf("Readable with practically no difficulty.\n"); break;
        case 5: printf("Perfectly readable.\n"); break;
        }
        
    }

    return 0;

}