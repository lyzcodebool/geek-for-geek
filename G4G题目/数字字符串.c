/*************************************************************************
	> File Name: 数字字符串.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 04:29:22 PM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    char str[50];

    float x = 30.23;

    sprintf(str, "%f", x);

    printf("%s", str);

    getchar();

}
