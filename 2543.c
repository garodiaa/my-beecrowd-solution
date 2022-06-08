#include<stdio.h>
int main()
{
    int n,l,i,j;
    int count=0;
    while(scanf("%d %d",&n,&l)!=EOF)
    {
     while (n--)
      {
        scanf("%d %d",&i,&j);
        if (j==0)
        {
            if (i==l)
            {
                count++;
            }
            
        }
        
       }
       printf("%d\n",count);
    }
     return 0;
}