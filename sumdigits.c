#include <stdio.h>
int main()
{
    int k, s, r = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&s);

    for(k=1; k <= s; ++k)
    {
        r += k;   // r= r+k;
    }

    printf("Sum = %d",r);

    return 0;
}
