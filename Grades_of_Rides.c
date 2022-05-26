#include<stdio.h>
void ac(int h,int sp,int sf)
{
    if(h>50 && sp>60 && sf>100)
    {
        printf("10");
    }
    else if(h>50 && sp>60)
    {
        printf("9");
    }
    else if(sp>60 && sf>100)
    {
        printf("8");
    }
    else if(h>50 && sf>100)
    {
        printf("7");
    }
    else if(h>50 || sp>60 || sf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}
int main()
{
    int h,sp,sf;
    scanf("%d%d%d",&h,&sp,&sf);
    ac(h,sp,sf);
    return 0;
}