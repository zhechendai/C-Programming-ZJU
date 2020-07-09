/*
 * @Date: 2020-07-05 14:31:56
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-09 19:56:34
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// find prime from 1-100

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i,x,y;	
    i=x=y=0;
    do {
        ++i;
        if ( i%2 ) 
            x+=i, 
        i++;
        y +=i++;
    } while ( i<=7 );
    printf("%d %d %d", i, x, y);
    
    return 0;
}


