/*
 * @Date: 2020-07-12 19:48:40
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-12 20:11:04
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// average 动态数组长度
#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt;
    printf("请输入数字的数量：");
    scanf("%d", &cnt);
    if (cnt>0)
    {
        int number[cnt];  // 数组的数量由输入的数决定 C99 Only
        scanf("%d", &x);
        while (x!=-1)
        {
            number[cnt] = x;
            sum += x;
            cnt ++;
            scanf("%d", &x);
        }  
    }

    return 0;   
}