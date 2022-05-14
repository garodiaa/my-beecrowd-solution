#include<stdio.h>
#include<string.h>
int main()
{
    int n ;
    int i , j;
    int l1 ,l2 ,len ;
    char a[51],b[51];

    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        
        scanf("%s",a);
        scanf("%s",b);

       l1=strlen(a);
       l2=strlen(b);

        if(l1>=l2)
        {
            len=l1;
        }
        else
        len=l2;
        for ( j = 0; j < len; j++)
        {
            if (j<l1)
            {
            printf("%c",a[j]); 
            }
            if (j<l2)
            {
            printf("%c",b[j]);
            }
            
        }
        printf("\n");
    }
    
     return 0;
}