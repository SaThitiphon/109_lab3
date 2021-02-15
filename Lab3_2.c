

#include <stdio.h>

int main()
{
    int n,most=0,b,c;
    scanf("%d",&n);
    int pa[n][2],i,j;
    if(n>=1&&n<10000)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&pa[i][j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(pa[i][0]==pa[i+1][0])
        {
            b = pa[i][1] + pa[i+1][1];
            most = most + b;
            c = pa[i][0];
        }
    }
    printf("%d %d",c,most);
}
