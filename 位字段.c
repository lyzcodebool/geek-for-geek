/*************************************************************************
	> File Name: 位字段.c
	> Author: 
	> Mail: 
	> Created Time: Sat 20 May 2017 08:45:53 PM PDT
 ************************************************************************/

#include<stdio.h>
//位字段
struct data
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
};
int main()
{
    printf("结构体大小：%d\n",sizeof(struct data));
    struct data p = {31, 12, 2014};
    printf("data is %d %d %d", p.d, p.m, p.y);
    return 0;
}
/*#include <stdio.h>
struct test
{
   unsigned int x;
   unsigned int y: 33;
   unsigned int z;
};
int main()
{
   printf("%d", sizeof(struct test));
   return 0;
}*/
