#include<stdio.h>
void main()
{
int i,x,l=0;
printf("enter a value");
scanff("%d",&x);
for(i=1;i<=x;i++)
{
l=l+i;
printf("%d,%d",i,l);
}
}
