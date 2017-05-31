/*************************************************************************
	> File Name: printf返回.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 06:58:05 PM PDT
 ************************************************************************/
#include <stdio.h>
 
/*int main()
{
     char str[100];
     printf("Enter a string: ");
     printf( "\rLength is: %d",
              printf("Entered string is: %s\n", gets(str)) - 20
           );
//这里主要使用了gets和printf的返回值来实现的不使用string.h来实现计算一个字符串的长度，printf返回输出的字符串的长度 
     return 0;
}*/
//不使用<string.h>来输出字符串长度的另一种方法：
int main()
{
    char str[50];
    int x;
    printf("请输入一个字符串：\n");
    scanf("%s", str);

    printf("字符串为：\n");
    printf("%s%n", str, &x);

    printf("字符串长度: %d", x);
    
}
