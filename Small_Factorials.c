#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
	return n*fact(n-1);
	}
}
int main()
{
    int n,x,res,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        res=fact(x);
        printf("%d
",res);
    }
    return 0;
}