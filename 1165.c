#include<stdio.h>
int main()
{
    int n ,x, i , j ,m=0 ;
    int isprime=0;

    scanf("%d",&n);
    while (m<n)
    {
        scanf("%d",&x);
        for ( i = 2; i*i <=x; i++)
        {
            if (x%i==0)
            {
                isprime=1;
                break;
            }
            else
            isprime=0;
        }

        if (isprime==0)
        {
            printf("%d eh primo\n",x);
        }
        else
            printf("%d nao eh primo\n",x);

        
        isprime=0;
        m++;

        
    }
    
     return 0;
}