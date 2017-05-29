/*************************************************************************
	> File Name: menu.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2017 10:14:32 PM PDT
 ************************************************************************/

/*#include<stdio.h>
// An example program to demonstrate working
// of enum in C
#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 
int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
}*/

/*// Another example program to demonstrate working
// of enum in C
#include<stdio.h>
 
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, 
          Aug, Sep, Oct, Nov, Dec};
 
int main()
{
   int i;
   for (i=Jan; i<=Dec; i++)      
      printf("%d ", i);
       
   return 0;
}*/
/*#include <stdio.h>
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
 
int main()
{
    enum day d = thursday;
    printf("The day number stored in d is %d", d);
    return 0;
}*/

/*#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};
 
int main()
{
    printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);
    return 0;
}*/

enum state  {working, failed};//错误，枚举重定义，重新确认枚举者，应该在范围内独一无二
enum result {failed, passed};
 
int main()  { return 0; }
