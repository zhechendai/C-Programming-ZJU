/*
 * @Date: 2020-07-05 14:31:56
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-05 16:13:10
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    int a=14;
    int t1 = a++; // t1 = 14

    printf("%d\n", a);

    int t2 = ++a; // t2 = 16

    printf("%d %d %d", t1, t2, a);

    return 0;
}