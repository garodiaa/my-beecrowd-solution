#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,avg , N5;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    avg=(N1*2+N2*3+N3*4+N4*1)/(10);
    printf("Media: %.1f\n",avg);
    if (avg >= 7.0)
    {
       printf("Aluno aprovado.\n");
    }
    else if (avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>5.9 || avg<6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        avg=(avg+N5)/2;

        if (avg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg);
        
    }
    
     return 0;
}