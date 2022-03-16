#include<stdio.h>
int main()
{
    int n , i , k;
    scanf("%d",&n);
    if (n%2!=0)
    {
        printf("%d\n",n);
        for ( i = 0; i < 5; i++)
        {
            n+=2;
            printf("%d\n",n);
        }
        
    }
    else
    {   

        n++;
        printf("%d\n",n);
        for ( k = 0; k < 5; k++)
        {
            n+=2;
            printf("%d\n",n);
        }
    }
    
    
     return 0;
}