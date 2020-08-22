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

// This code is contributed by Shivi_Aggarwal

// A function to find largest prime factor
long long maxPrimeFactors(long long n) {
  // Initialize the maximum prime factor
  // variable with the lowest one
  long long maxPrime = -1;

  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    maxPrime = 2;
    n /= 2;
  }

  // n must be odd at this point, thus skip
  // the even numbers and iterate only for
  // odd integers
  for (int i = 3; i <= sqrt(n); i += 2) { // i = i + 1 accepted too
    while (n % i == 0) {
      maxPrime = i;
      n = n / i;
    }
  }

  // This condition is to handle the case
  // when n is a prime number greater than 2
  if (n > 2)
    maxPrime = n;

  return maxPrime;
}

int main() {
  int t;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    long n;
    cin >> n;

    cout << maxPrimeFactors(n) << endl;
  }
  return 0;
}