/*
 * @Date: 2020-07-07 15:15:52
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 15:20:00
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 整数逆序

#include <stdio.h>

int main()
{
    int x;
    int digit;
    int ret = 0;

    scanf("%d", &x);
    while(x > 0){
        digit = x%10;
        ret = ret*10 + digit;
        x /=10;
    }

    printf("%d\n", ret);  // 这种情况下输入700输出为7，如果要输出007？如下

    return 0;
}

// int x;
// int digit;

// scanf("%d", &x);
// while(x > 0){
//     digit = x%10;
//     printf("%d\n",digit);  // 将每一次获得的个位按序打印
//     x /=10;
// }