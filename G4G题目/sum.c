/*************************************************************************
	> File Name: sum.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 04:26:39 PM PDT
 ************************************************************************/

# include<stdio.h>
int main()
{
  int n = 687;
  printf(" %d ", getSum(n));
 
  getchar();
  return 0;
}
 
/* Function to get sum of digits */
int getSum(int n)
{
    int sum;
    /*Single line that calculates sum*/
    for(sum=0; n > 0; sum+=n%10,n/=10);
    return sum;
}
