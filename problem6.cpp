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
    int n;
    cin >> n;
    long long sum = 0;
    long long sum_squares = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
      sum_squares += i * i;
    }
    sum = sum * sum;
    cout << sum - sum_squares << endl;
  }
  return 0;
}