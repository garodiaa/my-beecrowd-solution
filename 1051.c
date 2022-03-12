#include<stdio.h>
int main()
{
    float s , t;
    scanf("%f",&s);
    if (s<=2000.00)
    {
        printf("Isento\n");
    }
    else if (s>=2000.01 && s<=3000.00)
    {
        s-=2000.00;
        t=s*0.08;
        printf("R$ %.2f\n",t);
    }
    else if (s>=3000.01 && s<=4500.00)
    {
        s-=3000.00;
        t=s*0.18 + (1000.00*.08);
        printf("R$ %.2f\n",t);
    }
    else if (s>=4500.01)
    {
        s-=4500.00;
        t=s*0.28 + (1000.00*.08)+(1500.00*.18);
        printf("R$ %.2f\n",t);
    }
    
    
     return 0;
}