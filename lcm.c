#include <stdio.h>
int main()
{
    int k, r, min;
    printf("Enter two positive integers: ");
    scanf("%d %d", &k, &r);
    min = (k>r) ? k: r;
    while(1)
    {
        if( min%k==0 && min%r==0 )
        {
            printf("The LCM of %d and %d is %d.", k, r,min);
            break;
        }
        ++min;
    }
    return 0;
}
