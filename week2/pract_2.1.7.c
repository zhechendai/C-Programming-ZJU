/*
 * @Date: 2020-07-06 20:52:11
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 20:59:37
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// find the max, 3 varients

#include <stdio.h>
int main()
{
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    int max = 0;

    if(a>b){
        if(a>c){
            max = a;
        }else
        {
            max = c;
        }

    }else
    {
        if(b>c){
            max = b;
        }else
        {
            max = c;
        }
        
    }

    printf("the max is %d\n", max);

    return 0;
    
}