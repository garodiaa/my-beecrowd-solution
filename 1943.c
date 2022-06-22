#include<stdio.h>
int main()
{
    int k,n;
    scanf("%d",&k);
    if (k==1)
    {
        n=1;
    }
    else if (k==2 || k==3)
    {
        n=3;
    }
    else if (k==4 || k==5)
    {
        n=5;
    }
    else if (k>=6 && k<=10)
    {
        n=10;
    }
    else if (k>=11 && k<=25)
    {
        n=25;
    }
    else if (k>=26 && k<=50)
    {
        n=50;
    }
    else if (k>=50 && k<=100)
    {
        n=100;
    }
    
    printf("Top %d\n",n);
    

    return 0;
}