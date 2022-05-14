#include<stdio.h>
int main()
{
    int N[10];
    int V , i ,j;
    scanf("%d",&V);
    for ( i = 0; i < 10; i++)
    {
        N[i]=V;
        V=V*2;
    }
    for ( j = 0; j < 10; j++)
    {
        printf("N[%d] = %d\n",j,N[j]);
    }
    
     return 0;
}