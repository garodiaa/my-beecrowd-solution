#include<stdio.h>
int main()
{
    int q,d,p,a;
    while (1)
    {
        scanf("%d %d %d",&q,&d,&p);
        if (q==0)
        {
            break;
        }
        
        a=(q*d*p)/(p-q);
        if (a<=1)
        {
            printf("%d pagina\n",a);

        }
        else
            printf("%d paginas\n",a);
    }
    
    
    return 0;
}