#include<stdio.h>
int main()
{
    int d[10],m[10],y[10],i;
    for ( i = 0; i < 10; i++)
    {
    scanf("%d %d %d",&d,&m,&y);
    }
    for (i = 0; i < 10; i++)
    {
    printf("%02d/%02d/%02d\n",m[i],d[i],y[i]);
    printf("%02d/%02d/%02d\n",y[i],m[i],d[i]);
    printf("%02d-%02d-%02d\n",d[i],m[i],y[i]);
    }
    
    return 0;
}