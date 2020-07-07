/*
 * @Date: 2020-07-07 15:08:55
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 15:15:06
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// random number generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a = rand();

    printf("%d\n", a%100); // %100控制生成 1-99，没有的话生成的数为类似 134200694

    return 0;

}