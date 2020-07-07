/*
 * @Date: 2020-07-07 15:02:33
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-07 15:03:08
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// guess th number

#include <stdio.h>
#include <stdlib.h>  // 多的这两行是为了
#include <time.h>    // srand(time(0))和 int number = rand()

int main()
{
    srand(time(0));
    int number = rand()%100+1; //限制随机数范围是1-100
    int count = 0;
    int input = 0;

    printf("我已经想好了一个1到100之间的数");
    do{        // 在这里需要无论如何都进入循环，所以使用do-while比while更合适
        printf("请猜这个数：");
        scanf("%d", &input);
        count ++;
        if(input > number){
            printf("你猜的数大了");
        }else if(input < number){
            printf("你猜的数小了");
        }
    }while(input != number);

    printf("恭喜！你用了%d次就猜到了答案。\n", count);

    return 0;
}