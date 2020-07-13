/*
 * @Date: 2020-07-13 18:07:49
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-13 18:09:37
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
#include <string.h>
#define MAX 1000

void verifyCompute(char str[], int time[]);

int main()
{
    char str[MAX];
    char str1[]  = "END";
    int  time[3] = {0};
    do {
        scanf("%s", str);
        verifyCompute(str, time);
    } while (strcmp(str, str1) != 0);

    printf("%02d:%02d:%02d\n", time[0], time[1], time[2]);

    return 0;
}

void verifyCompute(char str[], int time[]) {
    int i = 1, flag1, flag2;
    if (str[0] == '$' && str[1] == 'G' && str[2] == 'P' && str[3] == 'R' && str[4] == 'M' && str[5] == 'C' && str[6] != '\0') {
        flag1 = 0;
        while (str[i] != '*') {
            flag1 ^= str[i];
            ++i;
        }
        flag1 %= 65536;

        char c1 = str[i+1];
        char c2 = str[i+2];
        int num1, num2;

        if (c1 >= 'A' && c1 <= 'F')
            num1 = 10 + c1 - 'A';
        else
            num1 = c1 - '0';
        if (c2 >= 'A' && c2 <= 'F')
            num2 = 10 + c2 - 'A';
        else
            num2 = c2 - '0';

        flag2 = num1 * 16 + num2;

        for (i = 7; str[i] != '*'; ++i) {
            if (str[i] == ',') break;
        }

        if (flag1 == flag2 && str[i+1] == 'A'){
            time[0] = ((str[7] - '0') * 10 + (str[8] - '0') + 8) % 24;
            time[1] = (str[9] - '0') * 10 + (str[10] - '0');
            time[2] = (str[11] - '0') * 10 + (str[12] - '0');
        }
    }
}