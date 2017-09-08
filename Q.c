#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int k=0;
int main()
{
    printf("Enter Q to quit !\n");
    while(1)
    {
    k++;
    printf("%d\n",k);
    Sleep(2000);
    system("class");
    }
    return 0;
