#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], i;
    long long sum = 0;
    cin >> a[0];
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i - 1] > a[i])
        {
            sum += (long long)(a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << sum;
}