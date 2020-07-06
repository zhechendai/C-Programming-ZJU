/*
 * @Date: 2020-07-06 21:13:59
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-06 21:18:35
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 
#include <stdio.h>

int main()
{
    const int PASS = 60;
    int score = 0;

    printf("please enter your score:");
    scanf("%d", &score);
    printf("your score is %d\n", score);

    if(score<PASS){
        printf("we are sorry, you did not pass your exam.\n");
    }else
    {
        printf("congradulations! you have passed your exam.\n");
        printf("good bye!");
    }

    return 0;
    
}