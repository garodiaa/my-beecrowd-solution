#include<stdio.h>
int main()
{
    int n , arr[100] ;
    int i , j, nf=0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    for ( j = 0; j<n-1; j++)
    {
        if (arr[j+1]<arr[j])
        {
            printf("%d\n",j+2);
            nf=1;
            break;
        }
    }

    if (nf==0)
    {
        printf("0\n");
    }
    
        
     return 0;
}