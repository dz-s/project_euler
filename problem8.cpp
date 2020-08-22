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

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<ll> v;

  for (int a0 = 0; a0 < t; a0++) {
    int N;
    int K;
    string str;

    cin >> N >> K;
    cin >> str;
    ll product;
    ll maxProduct = -1;
    for (int i = 0; i < str.size() - K; i++) {
      product = 1;
      for (int j = 0; j < K; j++) {
        product *= (str[i + j] - '0');
      }

      if (product > maxProduct) {
        maxProduct = product;
      }
    }
    cout << maxProduct << endl;
  }
  return 0;
}