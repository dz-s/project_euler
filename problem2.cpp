//Accepted
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        long n;
        cin >> n;
        unsigned long int t1 = 1, t2 = 2, next_term = 0;
        long sum = 0;
        for (; t1 <= n;)
        {
            if ((t1 % 2) == 0)
            {
                sum += t1;
            }
            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
        }
        cout << sum << endl;
    }
    return 0;
}