#include<stdio.h>
#include<string.h>
int main()
{
    int n , ismatch;
    char a[1000] , b[1000];
    int i , j , k ;

    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s %s",a,b);
        if (strlen(a)>=strlen(b))
        {
            for ( j = strlen(b)-1 , k=strlen(a)-1 ; j >= 0 ; j--,k--)
            {
                if (b[j]!=a[k])
                {
                    printf("nao encaixa\n");
                    ismatch=0;
                    break;
                }
                else
                {
                    ismatch=1;
                }
                
            }
            if (ismatch==1)
            {
               printf("encaixa\n");    
            }
            
            
        }
        else
        printf("nao encaixa\n");
        
    }
    
     return 0;
}