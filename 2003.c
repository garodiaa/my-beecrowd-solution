#include<stdio.h>
int main()
{
    int h,m;
    while (scanf("%d %d",&h,&m)!=EOF)
    {
        if (h==7)
        {
           printf("Atraso maximo: %d\n",m);
        }
        else if (h>=8)
        {
            h=h-8;
            m=60*h + m + 60;
           printf("Atraso maximo: %d\n",m);
            
        }
        else
           printf("Atraso maximo: 0\n");
    }
    
     return 0;
}