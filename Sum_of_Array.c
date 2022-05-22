#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum;
	int arr[n];
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+arr[i]; 
	}
	printf("%d",sum);
	return 0;	
}