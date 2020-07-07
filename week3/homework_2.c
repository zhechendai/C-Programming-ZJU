/*
 * @Date: 2020-07-07 16:03:01
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 16:52:31
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    scanf("%d", &number);
    int count = 0; //数位
    int digit; //数字
    int n; // 记录
    int result = 0;

    while(number >0){
        digit = number%10;
        count++;

        if(digit%2 == count%2){
            n = 1;
        }else
        {
            n = 0;
        }

        // result += n * 2^(count-1); 为什么指数计算用^不行
        result  += n * pow(2,count-1);
        
        number /=10;
    }

    printf("%d\n", result);

    return 0;
}