#include <stdio.h>
int main()
{
    int a[4],b[4],c[4],d[4],e[4],i,s[5],n,j;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&d[i]);
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&e[i]);
    }
    for(i=0;i<4;i++)
    {
        if(a[i]>0&&a[i]<6&&b[i]>0&&b[i]<6&&c[i]>0&&c[i]<6&&d[i]>0&&d[i]<6&&e[i]>0&&e[i]<6)
        {
            s[0] = a[0]+a[1]+a[2]+a[3];
            s[1] = b[0]+b[1]+b[2]+b[3];
            s[2] = c[0]+c[1]+c[2]+c[3];
            s[3] = d[0]+d[1]+d[2]+d[3];
            s[4] = e[0]+e[1]+e[2]+e[3];
            n = s[0];
            for(j=1;j<5;j++)
            {
                if(n<s[j])
                {
                    n = s[j];
                    i = j+1;
                }
            }
            printf("%d %d",i,n);
        }
    }
    
}

