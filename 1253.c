#include<stdio.h>
#include<string.h>
int main()
{
    int n , rs;
    char line[52],line2[52];
    int len;
    int i , j , k;
    
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s",line);
        scanf("%d",&rs);
        len=strlen(line);
        for ( j = 0; j < len ; j++)
        {
            if (line[j]-rs<65)
            {
            line2[j]=line[j]-rs+26;
            }
            else
            line2[j]=line[j]-rs;
        }
        line2[j]='\0';
        printf("%s\n",line2);

    }
     return 0;
}