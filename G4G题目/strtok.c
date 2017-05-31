/*************************************************************************
	> File Name: strtok.c
	> Author: 
	> Mail: 
	> Created Time: Tue 30 May 2017 06:16:24 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>

//字符串分割
int main()
{
    char str[] = "aaa:djf:dsjgfjg;fdhj dh}shds}shd";

    char *p;
    char *dilm = ":;}";

    printf("%s", strtok(str, dilm));
    while(p = strtok(NULL, dilm))
    {
        printf("%s ", p);
    }

    return 0;
}
