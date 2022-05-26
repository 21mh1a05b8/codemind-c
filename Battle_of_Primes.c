#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
int main()
{
    int x,y,sum,i,res;
    scanf("%d%d",&x,&y);
    sum=x+y;
    i=1;
    sum+=1;
    while (sum>0)
    {
        res=prime(sum);
        if(res==0)
        {
            printf("%d",i);
            break;
        }
        i+=1;
        sum+=1;
    }
    return 0;
}
