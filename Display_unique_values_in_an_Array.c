#include<stdio.h>
int main()
{
    int n,i,c,j,k=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
        if (arr[i]==arr[j])
            {
                c++;
            }
        }
        if (c==1)
        {
            k=1;
            printf("%d ",arr[i]);
        }
    }
    if (k==0)
    {
        printf("-1");
    }
}