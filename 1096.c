#include<stdio.h>
int main()
{
    int i , j ,m=7;
    for ( i = 1; i < 10; i+=2)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("I=%d J=%d\n",i,m);
            m--;
        }
        m+=3;
        
    }
    
     return 0;
}