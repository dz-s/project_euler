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

using namespace std;

int v[1000000];
void primes(){
    int i=0,n=2,j;
    while(n<1000000){
        for(j=2;j<=sqrt(n);j++){
            if(n%j==0)
            break;
        }
        if(j>sqrt(n))
        v[i++]=n;
        n++;
    }
}
int main(){
    int t;
    cin >> t;
    primes();
    for(int a0 = 0; a0 < t; a0++){
        int n,i=0;
        long sum=0;
        cin >> n;
        while(v[i]<=n){
            sum+=v[i++];
        }
        cout<<sum<<endl;
    }
    return 0;
}
