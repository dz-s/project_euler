

#include "functions.h"
#include <stdlib.h>

bool isEqual(float a, float b)
{
    if (abs(a - b) < 1e-9)
    {
        // a and b are equal
    }
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(int arr[], int n)
{
    ll ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
               (gcd(arr[i], ans)));

    return ans;
}