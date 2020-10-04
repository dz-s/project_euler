#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int v[1000000];
void primes()
{
  int i = 0, n = 2, j;
  while (n < 1000000)
  {
    for (j = 2; j <= sqrt(n); j++)
    {
      if (n % j == 0)
        break;
    }
    if (j > sqrt(n))
      v[i++] = n;
    n++;
  }
}
int main()
{
  int t;
  cin >> t;
  primes();
  for (int a0 = 0; a0 < t; a0++)
  {
    int n, i = 0;
    long sum = 0;
    cin >> n;
    while (v[i] <= n)
    {
      sum += v[i++];
    }
    cout << sum << endl;
  }
  return 0;
}
