/*************************************************************************
	> File Name: bool.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 May 2017 08:11:45 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool a[2] = {true, false};
    for(int i = 0; i < 2; ++i)
    {
        printf("%d ", a[i]);
    }
    
    putchar(10);

    bool  x = 4;
    bool  ch = 'c';
    bool  b = 0;
    printf("%d %d %d ", x, ch, b);
    return 0;
}
