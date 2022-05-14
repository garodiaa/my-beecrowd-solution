#include<stdio.h>
#include<string.h>
int main()
{
    int n ;
    char ar[101];
    int i , j , k;
    int flag=0,chk=0;

    do
    {
        scanf("%d %s",&n,ar);
        if (n==0)
        {break;}
        flag=0;


        for ( i = 0; i < strlen(ar); i++)
        {
            if(n+48!= ar[i])
            {
               
                if (ar[i]==48)
                {
        
                    if (chk!=1)
                  {
                    if (ar[i-1]==48+n || ar[i-1]==48)
                    { 
                        continue;
                    }
                    
                    if (i== (strlen(ar)-1))
                    {
                        printf("0");
                        continue;
                    }
                  }
                }
                
            printf("%c",ar[i]);
            chk=1;
            flag=1;
            }
        }
        if (flag==0)
        {
           printf("0");
        }
        printf("\n");   
        chk=0;     
    } while (n!=0);
    
     return 0;
}