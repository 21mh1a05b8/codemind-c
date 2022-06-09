#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("%d",j);
        }
        k=1;
        for(j=1;j<n-2;j++)
        {
            printf("%d",k);
            k+=1;
        }
        printf("
");
    }
}