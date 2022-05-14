#include<stdio.h>
int main()
{
    unsigned long long int y ,f=0,l=0;
    while (scanf("%llu",&y)!=EOF)
    {
        if ((y%4==0 && y%100!=0) || y%400==0)
        {
                printf("This is leap year.\n");
                l=1;
                f=1;
        }
        if (y%15==0)
        {
            printf("This is huluculu festival year.\n");
            l=1;

        }
        if (y%55==0 && f==1)
        {
            printf("This is bulukulu festival year.\n");
        }
        if (l!=1)
        {
            printf("This is an ordinary year.\n");
        }
        
        printf("\n");
        l=0;
        f=0;
    }
    
     return 0;
}