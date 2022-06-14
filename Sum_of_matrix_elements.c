#include<stdio.h>
int main()
{
    int n,i,m,j,sum=0;
    int arr[10][10];
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}