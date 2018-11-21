#include <stdio.h>
void main()
{
    int i,j,k;
    int n = 0;
    for(i=1;i<5;i++)
        for(j=1;j<5;j++)
            for(k=1;k<5;k++)
            {
                if(i!=k&&i!=j&&j!=k)
                {
                    printf("%d\n",i*100+j*10+k);
                    n++;
                }
            }
    printf("total %d",n);
}