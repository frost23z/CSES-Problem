#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, sum = 0, sm;
    cin >> n;
    sm = n * (n + 1) / 2;
    n--;
    while (n--)
    {
        cin >> a;
        sum += a;
    }
    cout << sm - sum;
}