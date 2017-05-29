/*************************************************************************
	> File Name: poin内存表示.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 May 2017 07:31:15 PM PDT
 ************************************************************************/
/*show bytes takes byte pointer as an argument
  and prints memory contents from byte_pointer
  to byte_pointer + len 
show bytes将字节指针作为参数
  并从byte_pointer打印存储器内容
  到byte_pointer + len*/



/*#include <stdio.h>
//typedef unsigned char *byte_pointer;//用typedef将unsigned char *类型数据换了个名字byte_pointer 下面的所有unsigned char * 都可以替换成byte_pointer;
void show_bytes(unsigned char *start, int len) 
{
     int i;
     for (i = 0; i < len; i++)
           printf(" %.2x", start[i]);//以十六进制小写形式打印
     printf("\n");
}
 
void show_int(int x)
{
     show_bytes((unsigned char *) &x, sizeof(int));
}
 
void show_float(float x) 
{
     show_bytes((unsigned char *) &x, sizeof(float));
}
 
void show_pointer(void *x) 
{
     show_bytes((unsigned char *) &x, sizeof(void *));
}
 
void show_char(char x)
{
    show_bytes((unsigned char *)&x, sizeof(char));
}
// Drover program to test above functions 
int main()
{
    int i = 1;
    float f = 1.0;
    int *p = &i;
    char ch = 'a';
    show_float(f);
    show_int(i);
    show_pointer(p);
    show_int(i);
    show_char(ch);
   // getchar();
    return 0;
}*/

//练习：
#include<stdio.h>
#include<stdlib.h>

void show_bytes(unsigned char *x, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%.2x", x[i]);
    }
}

void transform(int  m)
{
    show_bytes((unsigned char*)&m, sizeof(int));
}

int main()
{
    int x = 10;
    transform(x);
    return 0;
}
