#include<stdio.h>
void pret(int a,int b)
{
    int c=0,r,i;
    for(i=a;i<=b;i++)
    {
        r=i%10;
        if (r==2 or r==3 or r==9)
        {
            c+=1;
        }
    }
    printf("%d
",c);
}
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        pret(a,b);
    }
}