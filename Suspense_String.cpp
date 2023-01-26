#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string r = "";
    ll b = 1, l = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            s[b - 1] == '0' ? r = '0' + r : r = r + '1';
            b++;
        }
        else
        {
            s[n - l] == '0' ? r = r + '0' : r = '1' + r;
            l++;
        }
    }
    cout << r << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        t_soln();
    }
    return 0;
}