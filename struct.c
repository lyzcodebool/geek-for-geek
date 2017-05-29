/*************************************************************************
	> File Name: struct.c
	> Author: 
	> Mail: 
	> Created Time: Fri 19 May 2017 10:29:30 PM PDT
 ************************************************************************/

//#include<stdio.h>
//能用与结构变量的唯一操作就是赋值，除此以外不允许任何其他操作
//例一：
/*#include <stdio.h>
 
struct Point {
  int x;
  int y;
};
 
int main()
{
  struct Point p1 = {10, 20};
  struct Point p2 = p1; // works: contents of p1 are copied to p1
  printf(" p2.x = %d, p2.y = %d", p2.x, p2.y);
  getchar();
  return 0;
}*/

//例二：报错 不允许==操作
#include <stdio.h>
 
struct Point {
  int x;
  int y;
};
 
int main()
{
  struct Point p1 = {10, 20};
  struct Point p2 = p1; // works: contents of p1 are copied to p1
  if (p1 == p2)  // compiler error: cannot do equality check for         
                  // whole structures
  {
    printf("p1 and p2 are same ");
  }
  getchar();
  return 0;
}
