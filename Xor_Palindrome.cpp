#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[n - i - 1])
                res++;
        }
        cout << ((res + 1) >> 1) << '\n';
    }
    return 0;
}