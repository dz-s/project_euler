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

int main() {
  int t;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    long long product, temp;
    int a, b, c, n, t;
    cin >> n;
    product = -1;
    for (int a = 1, b, c; a <= n / 3; a++) {
      b = (n * n - 2 * n * a) / (2 * n - 2 * a);
      c = n - a - b;
      if (c * c == (a * a + b * b)) {
        temp = a * b * c;
        if (temp > product) {
          product = temp;
        }
      }
    }
    cout << product << endl;
  }
  return 0;
}
