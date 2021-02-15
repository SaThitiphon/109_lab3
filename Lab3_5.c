#include <stdio.h>

int main(){
  
    int n,j=0,a[3],k,b,m;
    scanf("%d",&m);
    n = m;
    while(n>1){
        for(int i = 2; i<=n; i++)
        {
            if(n%i==0){
                b = i;
                n = n/i;
                break;
            }
        }
        a[j] = b;
        j++;
    }
    if(j==3)
    {
        if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
        {
            printf("%d is not a Lucky Number.",m);
        }
        if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2])
        {
            printf("%d is a Lucky Number.",m);
        }
    }
    return 0;

}
