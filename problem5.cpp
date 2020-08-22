// C++ program to find GCD of two or
// more numbers
#include "functions.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
      nums[i] = i + 1;
    }

    ll ans = lcm(nums, n);
    cout << ans << endl;
  }
  return 0;
}