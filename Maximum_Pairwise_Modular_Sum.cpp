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
        int n, m;
        cin >> n >> m;
        vc a(n);
        int res = 0;
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
            res = max(res, a[i] * 2);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
            res = (a[a.size() - 1] - a[i]) % m > (m + a[i] - a[a.size() - 1]) % m ? max(res, a[a.size() - 1] + a[i] + ((a[a.size() - 1] - a[i]) % m)) : max(res, a[a.size() - 1] + a[i] + ((m + a[i] - a[a.size() - 1]) % m));
        cout << res << '\n';
    }
    return 0;
}