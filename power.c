#include <stdio.h>
int main()
{
    int b, ex;

    int r = 1;

    printf("Enter a base number: ");
    scanf("%d", &b);

    printf("Enter an exponent: ");
    scanf("%d", &ex);

    while (ex != 0)
    {
        result *= b;
        --ex;
    }

    printf("Answer = %d", r);

    return 0;
}
