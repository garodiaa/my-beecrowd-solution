#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    char arr[4];
    int sol;
    scanf("%d",&n);
    while (n--)
    {
        
        scanf("%s",&arr);
    
        if (arr[0]==arr[2])
        {
            sol=(arr[0]-48)*(arr[2]-48);
        }
        else if (isupper(arr[1]))
        {
            sol=arr[2]-arr[0];
        }
        else if (islower(arr[1]))
        {
            sol=(arr[0]-48)+(arr[2]-48);
        }
        printf("%d\n",sol);
        
    }
    
    return 0;
}