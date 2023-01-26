#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<long long>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vc a(n), b(n);
        ll maxd = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] - b[i] > 0)
                maxd += a[i] - b[i];
        }
        ll s = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i] - b[i];
        }
        !s ? cout << maxd << '\n' : cout << -1 << '\n';
    }
    return 0;
}