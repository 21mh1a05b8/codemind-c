#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]);
        }
        if(arr[i]==0)
        {
            c+=1;
        }
    }
    while(c)
    {
        printf("%d ",0);
        c-=1;
    }
}