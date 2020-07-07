/*
 * @Date: 2020-07-05 14:31:56
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 14:50:44
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>


int main()
{
    int x;
    int digit;
    // int ret = 0;

    scanf("%d", &x);
    while(x > 0){
        digit = x%10;
        printf("%d",digit);
        // ret = ret*10 + digit;
        x /=10;
    }

    return 0;
}