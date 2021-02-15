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
    s[0] = a[0]+a[1]+a[2]+a[3]+a[4];
    s[1] = b[0]+b[1]+b[2]+b[3]+b[4];
    s[2] = c[0]+c[1]+c[2]+c[3]+c[4];
    s[3] = d[0]+d[1]+d[2]+d[3]+d[4];
    s[4] = e[0]+e[1]+e[2]+e[3]+e[4];
    n = s[0];
    for(j=1;j<5;j++)
    {
        if(n<s[j])
        {
            n = s[j];
            i = j+1;
        }
    }
    printf("%d %d",i,j);
    
}

