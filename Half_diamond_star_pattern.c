#include<stdio.h>
int main()
{
    int i,j,N,c;
    scanf("%d",&N);
    c=1;
    if (N>=3 && N<=100)
    {
        for(i=1;i<N*2;i++)
        {
            for(j=1;j<=c;j++)
            {
                printf("*");
            }
            if(i<N)
            {
                c++;
            }
            else
            {
                c--;
            }
        printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
    return 0;
}