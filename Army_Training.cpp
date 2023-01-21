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
        vc at(n);
        ll a = 0, d = 0, res = 0;
        for (int i = 0; i < at.size(); i++)
        {
            cin >> at[i];
            a += at[i];
        }
        sort(at.begin(), at.end());
        for (int i = 0; i < at.size(); i++)
        {
            res = max(res, a * d);
            d += 1000 - at[i];
            a -= at[i];
        }
        cout << res << endl;
    }
    return 0;
}

