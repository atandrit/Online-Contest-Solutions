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
        int n, x;
        cin >> n >> x;
        vc a(n);
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        bool f = true;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                if (a[i] + a[i + 1] <= x)
                    swap(a[i], a[i + 1]);
                else
                {
                    f = false;
                    break;
                }
            }
        }
        f ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}