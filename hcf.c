#include <stdio.h>
int gcd(int k, int r)
{ 
    if (k == 0 || r == 0)
       return 0;
    if (k == r)
        return a;
    if (k > r)
        return gcd(k-r, r);
    return gcd(k, r-k);
}
int main()
{
    int k = 60, r = 40;
    printf("GCD of %d and %d is %d ", k, r, gcd(k, r));
    return 0;
}
