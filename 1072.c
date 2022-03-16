#include<stdio.h>
int main()
{
    int N ,i , a;
    int in=0, out=0;
    scanf("%d",&N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&a);

        if (a>=10 && a<=20)
        {
            in++;
        }
        else{

        out++;
        }
        
    }

    printf("%d in\n",in);
    printf("%d out\n",out);
    
     return 0;
}