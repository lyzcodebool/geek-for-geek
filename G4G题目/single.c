/*************************************************************************
	> File Name: single.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 08:22:51 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<signal.h>
int main()
{
    while(1)
    {
    signal(SIGINT, SIG_DFL);
    //signal(SIGINT, SIG_IGN);
    printf("ctrl+c 失效！");
    }
    //for(; ;){}

    return 0;
}

