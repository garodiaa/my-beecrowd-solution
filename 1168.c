#include<stdio.h>
#include<string.h>
int main()
{
    int n , l , i  ,j  ;
    int led=0;
    char v[100];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s",v);
        l=strlen(v);
        for ( j = 0; j < l; j++)
        {
            if (v[j]=='0'){led+=6;}
            if (v[j]=='1'){led+=2;}
            if (v[j]=='2'){led+=5;}
            if (v[j]=='3'){led+=5;}
            if (v[j]=='4'){led+=4;}
            if (v[j]=='5'){led+=5;}
            if (v[j]=='6'){led+=6;}
            if (v[j]=='7'){led+=3;}
            if (v[j]=='8'){led+=7;}
            if (v[j]=='9'){led+=6;} 
        }
        printf("%d leds\n",led);
        led=0;
    }
     return 0;
}