#include<stdio.h>
int main()
{
    int a[4],i;
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <4; i++)
    {
        if (a[i]==1)
        {
            printf("%d\n",i+1);
            break;
        }
        
    }
    
    

    return 0;
}