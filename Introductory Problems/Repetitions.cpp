#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, n = 0, mx = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            n++;
        }
        else
        {
            mx = max(mx, n);
            n = 0;
        }
    }
    cout << mx + 1;
}