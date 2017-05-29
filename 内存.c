/*************************************************************************
	> File Name: 内存.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 May 2017 05:44:10 PM PDT
 ************************************************************************/

/*#include<stdio.h>
//不用free 和 melloc怎么申请堆空间和释放内存以及valgrind查看内存使用时出现的错误
#include<stdlib.h>

int main()
{
    //int x;
    int *ptr = (int *)malloc(44);
    for(int i = 0; i < 11; ++i)
    {
        ptr[i] = i;
    }
    for(int i = 0; i < 11; ++i)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}*/

/*//例二：使用realloc申请和释放内存
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int *)malloc(10);
    realloc(ptr, 0);
}*/
/*//不建议用realloc申请空间,系统会忽略realloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //int x;
    int *ptr = NULL;
    realloc(ptr, 500);
    for(int i = 0; i < 11; ++i)
    {
        ptr[i] = i;
    }
    for(int i = 0; i < 11; ++i)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}*/

//realloc可以用来修改动态分配的内存的大小,必须重新定义一个指针变量
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 2);
    ptr[0] = 10;
    ptr[1] = 20;
    for(int i = 0; i < 2; ++i)
    {
        printf("%d ",ptr[i]);
    }
    int *new_ptr = realloc(ptr, sizeof(int)*3);
    *(new_ptr  + 2) = 30;

    putchar(10);
    for(int i = 0; i < 3; ++i)
    {
        printf("%d ", new_ptr[i]);
    }
    free(new_ptr);
   /* for(int i = 0; i < 3; ++i)
    {
        printf("%d ", new_ptr[i]);
    }*/ //错误，使用已经释放的内存，没有数组元素的存储空间
    
    return 0;
}
