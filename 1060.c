#include<stdio.h>
int main()
{   int i ,j,m=0;
    float array[6];
    for ( i = 0; i < 6; i++)
    {
        scanf("%f",&array[i]);
        if (array[i]>0)
        {
            m++;
        }
        
    }
    printf("%d valores positivos",m);
     return 0;
}