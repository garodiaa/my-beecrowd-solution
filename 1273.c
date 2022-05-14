#include<stdio.h>
#include<string.h>

typedef struct word {
    char name[51];
}word;

int main()
{
    int n;
    int i , j , k;
    int len ,dif;
    int flag=0;

    do
    {
        scanf("%d",&n);
        if (n==0){break;}
        if (flag==1)
        {printf("\n");}
        len=0;
        
        word arr[n];

        for ( i = 0; i < n; i++)
        {
            scanf("%s",arr[i].name);
        }
        for ( i = 0; i < n-1; i++)
        {
            if (strlen(arr[i].name)>len)
            {
                 len=strlen(arr[i].name);
            }
        }
        for ( i = 0; i < n; i++)
        {
            if (strlen(arr[i].name)<len)
            {
                dif=len-strlen(arr[i].name);
                for ( j = 0; j < dif; j++)
                {
                    printf(" ");
                }
                printf("%s\n",arr[i].name);
            }
            else
                printf("%s\n",arr[i].name);
        }
        flag=1;
        
    } while (n!=0);
     return 0;
}