#include <stdio.h>
#define MAXSIZE 100100

long long fibo[MAXSIZE];
long long fibonot[MAXSIZE];

void fib();

int main ()
{

    int n;
    fib();
    scanf("%d", &n);
    printf("%lld\n", fibonot[n]);

    return 0;
    
}

void fib()
{

    int i, j, k;
    fibo[0] = 0; fibo[1] = 1;
    for (i = 2; i <= MAXSIZE; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];

    for (i = 1, j = 2, k = 1; i <= MAXSIZE; ++i)
        if (fibo[j] != i)
            {fibonot[k] = i;
            k++;}
        else
            ++j;

}
