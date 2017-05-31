/*************************************************************************
	> File Name: time测量.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 04:48:36 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<time.h>

/*int main()
{
    long n = 10000000;

    clock_t start, finish;
        
    int i = 0;
    start = clock();
    while(n--) ;

    finish = clock();
    
    double duration = (double)(finish - start)/CLOCKS_PER_SEC;

    printf("%lfseconds\n", duration);

} */ // 用于大型程序的时间测时，或者循环时间， 小程序时间可能不显示，精度在10秒也有人说1秒

int main()
{
    time_t t1, t2;

    time(&t1);

    sleep(10);

    time(&t2);

    printf("time: \n %ld seconds\n", t2-t1);

    printf("今年到现在秒数：%ld\n %ld\n", t1, t2);
    return 0;
}
