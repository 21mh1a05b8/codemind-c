#include<stdio.h>
int main()
{
    int n,k,i=0,j=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    k=k-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if (j>k)
        {
            printf("%d ",arr[j]);
        }
    }
    for(j=0;j<n;j++)
    {
        if (j<=k)
        {
            printf("%d ",arr[j]);
        }
    }
    
}