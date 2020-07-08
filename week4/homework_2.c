/*
 * @Date: 2020-07-08 18:03:17
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-08 18:30:32
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>
int main()
{
    int x;
    printf("please type your number:");
    scanf("%d", &x);

    if (x < - 100000){
        printf("your number is wrong!\n");
    }else if(x > 100000){
        printf("your number is wrong!\n");
    }else
    {    
        if (x < 0){
            printf("fu ");
            x = -x;
        }
        
        int mask = 1;
        int t = x;
        while (t>9)
        {
            mask *= 10;
            t /= 10;
        }
        do
        {
            int d = x / mask;

            switch (d)
            {
            case 0: printf("ling "); break;
            case 1: printf("yi "); break;
            case 2: printf("er "); break;
            case 3: printf("san "); break;
            case 4: printf("si "); break;
            case 5: printf("wu "); break;
            case 6: printf("liu "); break;
            case 7: printf("qi "); break;
            case 8: printf("ba "); break;
            case 9: printf("jiu "); break;
            }
            
            x %= mask;
            mask /= 10;
        } while (mask > 0);
        
    }
    printf("\n");
    return 0;
}