/*
 * @Date: 2020-07-09 18:27:54
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-09 19:35:40
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// 高精度小数

#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d/%d", &a, &b);
    int cnt = 0;


    printf("0.");
    
    while (cnt<200)
    {
        int d = a*10/b;
        a = a*10%b;
        if (a >0)
        {
            printf("%d", d);
            cnt++;
        }else
        {
            break;
        }
        
    }

    printf("\n");
    return 0;
}