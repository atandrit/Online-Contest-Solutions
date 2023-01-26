#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
const int m = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        ll r = 1;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
                r = (r << 1) % m;
        cout << r << '\n';
    }
    return 0;
}