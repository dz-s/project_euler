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

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<ll> v;

    for (int a0 = 0; a0 < t; a0++)
    {
        int N;
        int K;
        string str;

        cin >> N >> K;
        cin >> str;
        ll product;
        ll maxProduct = -1;
        for (int i = 0; i < str.size() - K; i++)
        {
            product = 1;
            for (int j = 0; j < K; j++)
            {
                product *= (str[i + j] - '0');
            }

            if (product > maxProduct)
            {
                maxProduct = product;
            }
        }
        cout << maxProduct << endl;
    }
    return 0;
}