#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sen[51];
    int i , j , k ;
    int len  ;

    while (gets(sen))
    {
        len=strlen(sen);
        for ( i = 0; i < len; i++)
        {

            if (sen[i])
            {
                /* code */
            }
            
            if (sen[i]==' ')
            {
                continue;
            }
            
            tolower(sen[i])
            toupper(sen[i])
            
        }
        
    }
    

     return 0;
}