/*************************************************************************
	> File Name: 类型转换.c
	> Author: 
	> Mail: 
	> Created Time: Sun 28 May 2017 04:15:25 PM PDT
 ************************************************************************/

#include<stdio.h>
/*int main()
{
    unsigned a = 65535;

    int b;
    b = a;

    printf("%.2x   %.2x\n", a, b);
    printf("%d  %d", sizeof(int), sizeof(unsigned));
    return 0;
}*/

int main()
{
unsigned a,b;
int i,j;
a=65535;
i=-1;
j=a;
b=i;
printf("(unsigned)%u→(int)%d\n",a,j);printf("(int)%d→(unsigned)%u\n",i,b);
}
