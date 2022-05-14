#include<stdio.h>
#include<string.h>

typedef struct word {
    char name[51];
}word;

int main()
{
    int n , l ;
    int i,j,k;
    int sum=0;

    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&l);
        word arr [l];
        for ( j = 0; j < l; j++)
        {
            scanf("%s",arr[j].name);
        }
        for ( j = 0; j < l; j++)
        {
            for ( k = 0; k < strlen(arr[j].name); k++)
            {
                sum=sum + (arr[j].name[k] - 65) + j + k ;
            }
            
        }
        printf("%d\n",sum);
        sum=0;
    }
    

     return 0;
}