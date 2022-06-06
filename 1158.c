#include<stdio.h>
int main()
{
    int n,x,y,i;
    int count=0,sum=0;
    
    
     scanf("%d",&n); 
    while (n--)
    {
          scanf("%d %d",&x,&y);
          for ( i = x; count<y ; i++)
          {
              if (i%2!=0)
              {
                  sum+=i;
                  count++;
              }
              
          }
          printf("%d\n",sum);
          sum=0;
          count=0;
    }
    
     return 0;
}