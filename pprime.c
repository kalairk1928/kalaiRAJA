
#include <iostream>
using namespace std;

int main()
{
    int l, h, k, r;

    cout << "Enter two numbers(intervals): ";
    cin >> l >> h;

    cout << "Prime numbers between " << l << " and " << h << " are: ";

    while (l < h)
    {
        r = 0;

        for(k = 2; k <= l/2; ++k)
        {
            if(l % k == 0)
            {
                r = 1;
                break;

        if (r== 0)
            cout << l << " ";

        ++l;
    }

    return 0;
}
