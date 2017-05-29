/*************************************************************************
	> File Name: mai.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 May 2017 07:08:13 PM PDT
 ************************************************************************/

#include<stdio.h>
//不使用分号打印数字
#define N 100
/*int main(int num)
{
    if(num < N && printf("%d ",num) && main(num + 1))
    {

    }
}*/

//方法二：
/*int main(int num, char *argv[])
{
    while(num <= N && printf("%d ",num) && num++){}
}*/


//方法三：//用for必须要有分号，下面方法错误
int main(int num)
{
    for(num <= N && printf("%d ",num) && num++) 
}
