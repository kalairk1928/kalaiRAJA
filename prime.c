#include <stdio.h>
int main()
{
    int n, k, f = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(k=2; k<=n/2; ++k)
    {
        if(n%k==0)
        {
            f=1;
            break;
        }
    }

    if (f==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
