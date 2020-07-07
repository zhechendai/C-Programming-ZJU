/*
 * @Date: 2020-07-07 15:04:32
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 15:08:20
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// log2x function

#include <stdio.h>

int main()
{
    int x;
    int ret = 0;
    
    scanf("%d", &x);
    int t = x;

    while(x > 1){
        x /=2;
        ret++;
    }

    printf("log2 of %d is %d\n", t, ret);
    
}