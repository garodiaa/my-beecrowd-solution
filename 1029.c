#include<stdio.h>
int count;
int fib(int n);
int main()
{
    int n,m,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {   count=0;
        scanf("%d",&m);
        printf("fib(%d) = %d calls = %d\n",m,count-1,fib(m));
    }
    return 0;
}

int fib(int n)
{  
    count++;
    if (n<=1)
     return n;
     

    return fib(n-1)+fib(n-2);
}