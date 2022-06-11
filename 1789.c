 #include<stdio.h>
 int main()
 {
    int l,c;
    int i;
    int ten=0,twty=0,twtyy=0,count=0;
    while (scanf("%d",&l)!=EOF)
    {
        int arr[l];
        ten=0;twty=0;twtyy=0;
        
        for ( i = 0; i < l; i++)
        {
            scanf("%d",&arr[i]);

            if (arr[i]<10)
            {
                ten=1;
            }
            else if (arr[i]>=10 && arr[i]<20)
            {
                twty=1;
            }
            else if (arr[i]>=20)
            {
                twtyy=1;
            }
        }
        if (twtyy==1)
        {
            c=3;
        }
        else if (twty==1)
        {
            c=2;
        }
        else if (ten==1)
        {
            c=1;
        }
        printf("%d\n",c);
        
        
        
    }
    
    return 0;
 }