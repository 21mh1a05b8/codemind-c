#include<stdio.h>
int main()
{
     int a[100][100],r,c,sum=0,i,j,sum1=0;
     scanf("%d%d",&r,&c);
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
             scanf("%d",&a[i][j]);
             if (a[i][j]%2==0)
             {
             sum=sum+a[i][j];
             }
             else
             {
                 sum1=sum1+a[i][j];
             }
        }
     }
     printf("%d %d",sum,sum1);
     return 0;
}