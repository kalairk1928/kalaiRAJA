#include <stdio.h>
int main()
{
    int n, o, k, r = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    o = n;

    while (o != 0)
    {
        k = o%10;
        r += k*k*k;
        o /= 10;
    }

    if(r== n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
