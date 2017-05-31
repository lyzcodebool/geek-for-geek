/*************************************************************************
	> File Name: float.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 03:04:48 PM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    float x = 0.1000000000000;
    //int a = 1;
    if(x == 0.1)
    {
        printf("if\n");
    }
    else if(x == 0.1f)
    {
        printf("else if\n");
    }
    else
    printf("else\n");

    printf("%f", x);
    return 0;
}
