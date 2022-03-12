#include<stdio.h>
int main()
{
    int n , h ;
    float sh ;
    scanf("%d",&n);
    scanf("%d",&h);
    scanf("%f",&sh);

    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f\n",h*sh);
     return 0;
}