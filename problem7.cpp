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
typedef long long int ll;
#define max 1000000
using namespace std;

int main() {
  int t;
  cin >> t;
  vector<ll> v;
  v.emplace_back(2);
  for (ll i = 3; i < max; ++i) {
    int f = 0;
    for (ll j = 2; j <= sqrt(i); ++j) {
      if (i % j == 0) {
        f = 1;
        break;
      }
    }
    if (f == 0)
      v.emplace_back(i);
    ++i;
  }
  for (int a0 = 0; a0 < t; a0++) {
    int n;
    cin >> n;
    cout << v[n - 1] << endl;
  }
  return 0;
}