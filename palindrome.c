#include <stdio.h>
int main()
{
    int n, r = 0, k,s;

    printf("Enter an integer: ");
    scanf("%d", &n);
    s = n;
    while( n!=0 )
    {
        k = n%10;
        r = r*10 + k;
        n /= 10;
    }
    if (s== r)
        printf("%d is a palindrome.", s);
    else
        printf("%d is not a palindrome.", s);
    
    return 0;
}
