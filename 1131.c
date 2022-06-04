#include<stdio.h>
int main()
{
    int a,b,x;
    int inter=0, gremio=0 ,draw=0;
    int grenais=0;


    for (;;)
    {
        grenais++;
        scanf("%d %d",&a,&b);
        if (a>b)
        {
            inter++;
        }
        else if(b>a)
        {
            gremio++;
        }
        else
            draw++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&x);
        if (x==2)
        {
            break;
        }
    }

    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",draw);
    if (inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if (gremio>inter)
    {
        printf("Gremio venceu mais\n");
    }
    else
        printf("Não houve vencedor\n");

    
    


    
     return 0;
}