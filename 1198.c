#include<stdio.h>
int main()
{
    unsigned long a ,b ,x;
    while (scanf("%lu %lu",&a,&b)!=EOF)
    {
        if (a>b)
        {
            x=a-b;
        }
        else
        x=b-a;
        
        printf("%lu\n",x);
        
    }
    
     return 0;
}