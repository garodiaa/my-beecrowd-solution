#include<stdio.h>
int main()
{
    int h1 , m1 , h2 , m2 ,dif ;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    dif=((m1*60)+h1)-((m2*60)+h2);

    if (dif<=0)
    {
        dif += 24*60;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60 , dif%60);
    return 0;
}