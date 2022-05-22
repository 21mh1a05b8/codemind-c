#include<stdio.h>
int main()
{
    int n,i,c,count,num;
    int arr[n];
    c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        num=arr[i];
        while (num>0)
        {
            count++;
            num=num/10;
        }
        if (count%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    
}