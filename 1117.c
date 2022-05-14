#include<stdio.h>
int main()
{
    float n , x , y , avg;
    int i=0;
    for (;;)
    {
        scanf("%f",&n);
        if (n<0 || n>10)
        {
            printf("nota invalida\n");
        }
        else
        {    i++;
             if (i==1)
             {
                 x=n;
             }
     
             if (i==2)
             {
                 y=n;
                 break;
             }
        }

    }
            avg=(x+y)/2;
            printf(" x-%f y-%f\n",x,y);
            printf("media = %.2f\n",avg);
    
     return 0;
}