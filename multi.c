#include <stdio.h>
int main()
{
    int k, r;

    printf("Enter an integer: ");
    scanf("%d",&k);

    for(r=1; r<=10; ++r)
    {
        printf("%d * %d = %d \n", k, r, k*r);
    }
    
    return 0;
}
