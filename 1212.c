#include<stdio.h>
int main()
{
    unsigned int a,b;
    int i , j,k;
    for ( ; ;)
    {
       int carry=0;
       scanf("%i %i",&a,&b);
       if (a==0 && b==0)
       {
        break;
       }
    int c=0;
    unsigned int x,y,z=10;
       for ( i = 0; i < 10; i++)
       {
         x=a%z;
         a=a/10;
         y=b%z;
         b=b/10;
            if (x+y+c>=10)
            {
                carry++;
                c=1;
            }
       }

       if (carry==0)
       {
        printf("No carry operations.\n");
       }
       else
       printf("%d carry operations.\n",carry);


       
    }
    
    return 0;
}