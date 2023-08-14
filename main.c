#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ int s,n,i,j;
    printf("enter n:number");
    scanf("%d",&n);
    s=0;
    j=1;
    for(i=1;i<=n;i++)
      j=j+2;                          // 1+3+5+7
        s=s+pow(j,2)+2;
        printf("%d",s);

    return 0;
}
