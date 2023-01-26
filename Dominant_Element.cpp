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
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int c = 1;
        vc res;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] == a[i - 1] && i < a.size() - 1)
                c++;
            else
            {
                if (a[i] == a[i - 1] && i == a.size() - 1)
                    c++;
                res.push_back(c);
                c = 1;
            }
        }
        sort(res.begin(), res.end());
        if (res[res.size() - 1] == res[res.size() - 2])
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}