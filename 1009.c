#include<stdio.h>
int main()
{
    char name;
    double s , sale ;
    scanf("%s %lf %lf",&name,&s ,&sale);

    printf("TOTAL = R$ %.2lf\n",(s+sale*.15));
     return 0;
}