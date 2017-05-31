/*************************************************************************
	> File Name: 大小端测试.c
	> Author: 
	> Mail: 
	> Created Time: Tue 30 May 2017 04:30:49 PM PDT
 ************************************************************************/

#include<stdio.h>
/*void TestBigSmal(unsigned char*x, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%.2x", x[i]);
    }
}

int main()
{
    int a = 0x12345678;
    TestBigSmal((unsigned char *)&a, sizeof(int));

    return 0;
}*/

//大端存储高字节存高地址，小端存储反之

//快速确定机器大小端的方法
/*int main()
{
    int i = 1;
    char *a = (char *)&i;

    if(*a)
    {
        printf("little");
    }
    else
    {
        printf("big");
    }

    return 0;
}*/


