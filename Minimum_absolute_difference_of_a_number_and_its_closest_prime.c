#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k=0,c=0,mx=0,mn=0,m=0;
	int a;

        scanf("%d",&a);
        //printf("%d
",a);
        c=0;
        k=0;
    	for(i=0;i<a;i++)
    	{
    	    c=0;
    	    for(j=2;j<a+k;j++)
        	{
        	    if((a+k)%j==0)
        	    {
        	       c++; 
        	    }
        	}
        	if(c==0)
        	{
        	    mx=a+k;
        	    break;
        	}
        	k++;
    	}
    	c=0;
    	m=0;
    	for(i=0;i<a;i++)
    	{
    	    c=0;
        	for(j=2;j<a-m;j++)
            	{
            	    if((a-m)%j==0)
            	    {
            	       c++; 
            	    }
            	}
            	if(c==0)
            	{
            	    mn=a-m;
            	    break;
            	}
            	m++;
    	}
    	int min=a-mn,max=mx-a;
    	 if(min>max)
    	    printf("%d
",max);
    	 else   
            printf("%d
",min);
}