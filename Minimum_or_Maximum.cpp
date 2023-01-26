#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        vc a(n), Max(n), Min(n);
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        Max[0] = a[0];
        Min[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            Max[i] = max(a[i], Max[i - 1]);
            Min[i] = min(a[i], Min[i - 1]);
        }
        bool flag = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != Max[i] && a[i] != Min[i])
            {
                flag = false;
                break;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
