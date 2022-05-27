#include<stdio.h>
void self(int n)
{
    int k,r,count=0,c=0;
    k=n;
    while(n)
    {
        r=n%10;
        if(r!=0)
        {
            if(k%r==0)
            {
                c+=1;
            }
        }
        count+=1;
        n=n/10;
    }
    if(count==c)
    {
        printf("%d ",k);
    }
}
    int main()
    {
        int a,b,i;
        scanf("%d",&a);
        scanf("%d",&b);
        for(i=a;i<=b;i++)
        {
            self(i);
        }
    }