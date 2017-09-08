#include <stdio.h>
int main()
{
    int s, k = 0, r;

    printf("Enter an integer: ");
    scanf("%d", &s);

    while(s != 0)
    {
        r = s%10;
        k = k*10 + r;
        s /= 10;
    }

    printf("reversed number = %d", k);

    return 0;
}
