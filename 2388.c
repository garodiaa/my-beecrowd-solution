#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int t[n],v[n];
    for ( i = 0; i < n; i++)
    {
       scanf("%d %d",&t[i],&v[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum+=t[i]*v[i];
    }
    printf("%d\n",sum);
    
    
    return 0;
}