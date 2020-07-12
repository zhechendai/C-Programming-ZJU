/*
 * @Date: 2020-07-12 19:40:12
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-12 20:11:13
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// average

#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];   // 定义一个长度为100的数组     如果输入的数个数大于100怎么办？
    scanf("%d", &x);
    while (x!=-1)
    {
        number[cnt] = x;
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }
    if (cnt>0)
    {
        int i;
        double average = sum / cnt;
        for ( i = 0; i < cnt; i++)
        {
            if (number[i] > average)
            {
                printf("%d\n", number[i]);   // 打印值大于平均值的数
            }
            
        }
        
    }
    
    return 0;
}