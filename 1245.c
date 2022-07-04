#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    while (scanf("%d",&n)!=EOF)
    {
        int m[n];
        char c[n+1];
        for ( i = 0; i < n; i++)
        {
            scanf("%d %c",&m[i],&c[i]);
        }
        int count=0;
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if (m[i]==m[j])
                {
                    if (c[i]=='D')
                    {
                        if (c[j]=='E')
                        {
                            count++;
                            c[i]=0;
                            c[j]=0;
                            m[i]=0;
                            m[j]=0;
                        }
                    }
                    else if (c[i]=='E')
                    {
                        if (c[j]=='D')
                        {
                            count++;
                            c[i]=0;
                            c[j]=0;
                            m[i]=0;
                            m[j]=0;
                        }
                    }  
                }
            }
        }
        printf("%d\n",count);
    }
        return 0;
}