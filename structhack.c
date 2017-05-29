/*************************************************************************
	> File Name: structhack.c
	> Author: 
	> Mail: 
	> Created Time: Fri 19 May 2017 04:59:09 PM PDT
 ************************************************************************/

//#include<stdio.h>
//结构黑客
/*struct Hack
{
    //char a[2];
    //int b;
    char y;
    int x;
    //int a[0];//结构体大小为8；
    //char a[0]; // 结构体大小为8
    //int a[1]; //结构体大小为12；
    //char a[1]; //结构体大小为8；
};
int main()
{
    struct Hack test;
    printf("%d", sizeof(test));
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
    int emp;
    int name_len;
    char name[0];
};

int main()
{
    struct Employee *e = malloc(sizeof(*e) + sizeof(char) * 128);
    e-> emp = 100;
    e-> name_len = strlen("Geeks For Geeks");
    strncpy(e-> name,"Geeks For Geeks",e-> name_len);
    printf("%s", e->name);

    return 0;
}
