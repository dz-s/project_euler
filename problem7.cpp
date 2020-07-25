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
typedef long long int ll;
#define max 1000000
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<ll> v;
    v.emplace_back(2);
    for (ll i = 3; i < max; ++i)
    {
        int f = 0;
        for (ll j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            v.emplace_back(i);
        ++i;
    }
    for (int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
    return 0;
}