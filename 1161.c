#include<stdio.h>
int main()
{
    long long int M , N ,facm=1, facn=1;
    int i , j;
    while (scanf("%lld %lld",&M , &N)!=EOF)
    {
        for ( i = 1; i <=M; i++)
        {   
            facm=facm*i;
        }
        for ( j = 1; j <=N; j++)
        {   
            facn=facn*j;
        }

        printf("%lld\n",facm+facn);
        facn=1;
        facm=1;
    }
    
     return 0;
}