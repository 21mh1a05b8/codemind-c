#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,flag,i,j,c=0;
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++)
   {
      flag=0;
      if (i>1)
      {
      for(j=2;j<=int(sqrt(i))+1;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
      }
      if(flag==0)
        {
            c++;
        }
  }
 printf("%d",c);
 return 0;
}
