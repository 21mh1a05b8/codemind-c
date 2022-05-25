#include<stdio.h>
int main()
{
    int n,i,sum=0,flag=0;
    int arr[n];
    int avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}