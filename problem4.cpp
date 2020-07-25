#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int oneDigit(int num)
{
    return (num >= 0 && num < 10);
}

bool isPalUtil(int num, int *dupNum)
{

    if (oneDigit(num))
        return (num == (*dupNum) % 10);

    if (!isPalUtil(num / 10, dupNum))
        return false;

    // The following statements are executed when we move up the
    // recursion call tree
    *dupNum /= 10;

    return (num % 10 == (*dupNum) % 10);
}

int isPal(int num)
{
    if (num < 0)
        num = -num;

    int *dupNum = new int(num);

    return isPalUtil(num, dupNum);
}

int main()
{
    set<int> palindroms;
    int product = -1;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            product = i * j;
            if (palindroms.find(product) == palindroms.end() && isPal(product))
            {
                palindroms.insert(product);
            }
        }
    }

    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        int largestPal = -1;
        for (set<int>::iterator it = palindroms.begin(); it != palindroms.end(); ++it)
        {
            if (int(*it) < n && int(*it) > largestPal)
            {
                largestPal = int(*it);
            }
        }
        cout << largestPal << endl;
    }
    return 0;
}