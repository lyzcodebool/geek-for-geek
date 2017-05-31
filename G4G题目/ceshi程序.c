/*************************************************************************
	> File Name: ceshi程序.c
	> Author: 
	> Mail: 
	> Created Time: Tue 30 May 2017 04:04:47 PM PDT
 ************************************************************************/

// PROGRAM 1
/*#include <stdio.h>
int f1() { printf ("Geeks"); return 1;}
int f2() { printf ("forGeeks"); return 1;}
int main() 
{ 
    int p = f1() + f2();  
    putchar(10);
    printf("%d", p);
  return 0; 
}*/

// PROGRAM 2
/*#include <stdio.h>
int x = 20;
int f1() { x = x+10; return x;}
int f2() { x = x-5;  return x;}
int main()
{
  int p = f1() + f2();
  printf ("p = %d", p);
  return 0;
}*/

// PROGRAM 3
/*#include <stdio.h>
int main()
{
   int i = 8;
   int p = i++*i++;
   printf("%d\n", p);
}*/


// Following 3 lines are common in all of the below programs
#include <stdio.h>
int f1() { printf ("Geeks"); return 1;}
int f2() { printf ("forGeeks"); return 1;}
 
// PROGRAM 4
/*int main() 
{ 
   // Since && defines a sequence point after first operand, it is 
   // guaranteed that f1() is completed first.
   int p = f1() && f2();  
   return 0; 
}*/
 
// PROGRAM 5
/*int main()
{
   // Since comma operator defines a sequence point after first operand, it is
   // guaranteed that f1() is completed first.
  int p = (f1(), f2());
  return 0;
}*/
 
 
// PROGRAM 6
int main() 
{ 
   // Since ? operator defines a sequence point after first operand, it is 
   // guaranteed that f1() is completed first.
  int p = f1()? f2(): 3;  
    putchar(10);
  return 0;
}
