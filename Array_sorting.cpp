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
        vc a(n);
        int res = 0;
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
            int tmp = abs(a[i] - i - 1);
            res = __gcd(res, tmp);
        }
        cout << res << '\n';
    }
    return 0;
}