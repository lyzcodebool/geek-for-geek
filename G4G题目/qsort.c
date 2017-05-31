/*************************************************************************
	> File Name: qsort.c
	> Author: 
	> Mail: 
	> Created Time: Tue 30 May 2017 04:54:13 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int com_xy(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}

int main()
{
    int a[5] = {1, 23, 11, 34, 22};

    qsort(a, 5, sizeof(a[0]), com_xy);

    for(int i= 0; i < 5; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
