#include<stdio.h>
int main()
{
    int N,i;
    int arr[]={365,30,1};
    int brr[3];
    scanf("%d",&N);
    for ( i = 0; i < 3; i++)
    {
        brr[i]=N/arr[i];
        N=N%arr[i];
    }
    
    printf("%d ano(s)\n",brr[0]);
    printf("%d mes(es)\n",brr[1]);
    printf("%d dia(s)\n",brr[2]);
    
     return 0;
}