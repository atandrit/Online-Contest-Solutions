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
        unordered_map<int, int> m;
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int res = INT_MIN;
        unordered_map<int, int>::iterator i;
        for (i = m.begin(); i != m.end(); i++)
            res = max(res, i->second);
        res = n - res;
        cout << res << '\n';
    }
    return 0;
}