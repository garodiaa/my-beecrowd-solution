#include<stdio.h>
int main()
{
    int array[5] , i , o , e , n, p ;
    o=e=n=p=0;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
        if (array[i]>0)
        {
            p++;
        }
        if (array[i]<0)
        {
            n++;
        }
        
        if (array[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        
    }
    
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
     return 0;
}