#include<stdio.h>
int main()
{
    int array[5] , i ,c=0 ;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
        if (array[i]%2==0)
        {
            c++;
        }
        
    }
     printf("%d valores pares\n",c);
     return 0;
}