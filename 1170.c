#include<stdio.h>
int main()
{
    int N , i=0, j=0 ;
    float X;
    scanf("%d",&N);
    while (i<N)
    {
        scanf("%f",&X);
        while (X>1)
        {
            X=X/2;
            j++;
        }
        printf("%d dias\n",j);
        j=0;

        i++;
    }
    
     return 0;
}
