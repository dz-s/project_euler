#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        long long product, temp;
        int a, b, c, n, t;
        cin >> n;
        product = -1;
        for (int a = 1, b, c; a <= n / 3; a++)
        {
            b = (n * n - 2 * n * a) / (2 * n - 2 * a);
            c = n - a - b;
            if (c * c == (a * a + b * b))
            {
                temp = a * b * c;
                if (temp > product)
                {
                    product = temp;
                }
            }
        }
        cout << product << endl;
    }
    return 0;
}
