#include<stdio.h>
#include<string.h>
int main()
{
    int i ;
    char s[100];
    int len ;
    int up=0,low=0,num=0;


    while (gets(s))
    {
       
        up=0;
        low=0;
        num=0;

       len=strlen(s);
       if (len<6 || len>32)
       {
            printf("Senha invalida.\n");
       }
       else
       {   int p=1;
           for ( i = 0; i < len; i++)
           {
               if (s[i]>=65 && s[i]<=90)
               {
                   up=1;
               }
               else if (s[i]>=97 && s[i]<=122)
               {
                  low=1;
               }
               else if (s[i]>=48 && s[i]<=57)
               {
                   num=1;
               }
               else
               {
                   p=0;
                   break;
               }  
           }
           if (up==1 && low==1 && num==1 && p==1)
            {
               printf("Senha valida.\n");
            }
           else
           {
               printf("Senha invalida.\n");
           }
       }
        
    }
    
     return 0;
}