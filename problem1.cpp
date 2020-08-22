#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
// TLE
int main() {
  int t;
  int sum;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    int n;
    cin >> n;
    sum = 0;
    const int three = 3;
    const int five = 5;
    int i = 1;
    int j = 1;
    int i_candidate = 3;
    int j_candidate = 5;
    set<int> multiplies;
    while (i_candidate < n || j_candidate < n) {
      i_candidate = three * i;
      j_candidate = five * j;

      if (i_candidate < n) {
        if (multiplies.find(i_candidate) == multiplies.end()) {
          sum += i_candidate;
          multiplies.insert(i_candidate);
        }

        i++;
      }
      if (j_candidate < n) {
        if (multiplies.find(j_candidate) == multiplies.end()) {
          sum += j_candidate;
          multiplies.insert(j_candidate);
        }

        j++;
      }
    }

    cout << sum << endl;
  }
  return sum;
}

// Accepted
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  int sum;
  long N, num, three, five, fifteen = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> num;
    // int sum=0;
    three = (num - 1) / 3;
    five = (num - 1) / 5;
    fifteen = (num - 1) / 15;

    cout << 3 * (three * (three + 1) / 2) + 5 * (five * (five + 1) / 2) -
                15 * (fifteen * (fifteen + 1) / 2)
         << endl;
  }
  return 0;
}
