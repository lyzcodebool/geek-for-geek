/*************************************************************************
	> File Name: fu负数.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 May 2017 08:28:02 PM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    if(sizeof(int) > -1)
    {
        printf("true");
    }
    else
    printf("false!");

    return 0;
}
在C中，当signed int值与unsigned int进行比较时，int被提升为unsigned。负数以2的补码形式存储，2的补码形式的无符号值远大于sizeof int。
