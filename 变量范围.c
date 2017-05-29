/*************************************************************************
	> File Name: 变量范围.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 May 2017 03:36:41 PM PDT
 ************************************************************************/
/*
#include<stdio.h>
//int x = 10;

int fun(int x)
{
    return x;
}

int gun()
{
    int x = 100;
    return  fun(x);
}
int main()
{
    int x = 20;
    printf("%d\n", gun());
    printf("%d", fun(x));

    return 0;
}
*/

/*#include<stdio.h>
int x = 20;
int main()
{
    printf("%d", x);
    return 0;
}*/

/*//外部变量只声明没有定义
#include<stdio.h>

extern int x; //没有定义，没有分配内存
int main()
{
    x = 10;//程序报错，找不到x的定义
    printf("%d", x);
    return 0;
}*/

/*//外部声明并且初始化（分配内存）
#include<stdio.h>
extern int x = 10;
extern int b = 10;
int main()
{
    x = 100;
    printf("x = %d\n",x);
    printf("b = %d\n",b);
}*/

/*#include<stdio.h>
int x = 20;
int main()
{
    x = 30;
    printf("%d\n", x);
    return 0;
}*/

/*#include<stdio.h>
int *ptr;//因为是全局变量，没有赋值时默认为0；
int main()
{
    int *git = NULL;
    if(ptr == git)
    {
        printf("相等");
    }
    else
    {
        printf("不相等");
    }
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int *p;
    int *q = NULL;

    if(p == q)
    {
        printf("equal!");
    }
    else
    printf("error!");

    return 0;
}*/

/*#include<stdio.h>
int x;//c语言允许给一个没有初始化的全局变量重新定义；注意c++不可以，而且只能是全局变量
int x = 5;
int main()
{
    printf("%d", x);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int x;
    int x = 5;//错误，和上面程序对比，局部变量不可以重新定义
}*/


/*#include<stdio.h>
int x = 10;

int fun(int x)
{
    return x;
}

int gun()
{
   int x = 100;
    return  fun(x);
}
int main()
{
   // int x = 20;
    printf("%d\n", gun());
    printf("%d", fun(x));

    return 0;
}*/

#include<stdio.h>
int x = 10;
int main()
{
     x = 20;
    printf("%d", x);
}
