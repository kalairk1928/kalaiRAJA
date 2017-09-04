#include<stdio.h>
void main()
{
int i,x,s=0;
printf("enter a value");
scanff("%d",&x);
for(i=1;i<=x;i++)
{
s=s+i;
printf("%d,%d",i,s);
}
}
