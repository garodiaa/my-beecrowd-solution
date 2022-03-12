#include<stdio.h>
int main()
{
    int N ,i,j ;
    int arr[]={100,50,20,10,5,2,1};
    int brr[7];
    scanf("%d",&N);
    printf("%d\n",N);
    for ( i = 0; i < 7; i++)
     {
        brr[i]=N/arr[i];
        N=N%arr[i];
     }
    
    for ( j = 0; j < 7; j++)
    {
        printf("%d nota(s) de R$ %d,00 \n", brr[j], arr[j]);
    }
     return 0;
}