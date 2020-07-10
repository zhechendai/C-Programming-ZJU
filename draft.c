/*
 * @Date: 2020-07-05 14:31:56
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-10 15:54:31
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

// find prime from 1-100

#include <stdio.h>

int perfNumber(int i)
{
    int per=1;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            per+=j;
        }
    }
    if(per!=i)
    {
        i=0;
    }
        return i;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int b=0;
    for(int i=n+1;i<m;i++)
    {
        if(perfNumber(i))
        {
            if(!b)
            {
            printf("%d",i);
            b=1;
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
    if(!b)
    {
        printf("NIL");
    }
    printf("\n");
	return 0;
}

