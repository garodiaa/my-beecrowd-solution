#include<stdio.h>
int main()
{
    float array[6] , sum=0, avg;
    int i ,j , k=0;
    for ( i = 0; i < 6; i++)
    {
        scanf("%f",&array[i]);
        if (array[i]>0)
        {
            k++;
            sum+=array[i];
        }
        
    }
    
    avg=sum/k;
    printf("%d valores positivos\n",k);
    printf("%.1f\n",avg);

     return 0;
}