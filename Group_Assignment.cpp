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
        vc p(n);
        unordered_map<int, int> m;
        for (int i = 0; i < p.size(); i++)
        {
            cin >> p[i];
            m[p[i]]++;
        }
        bool f = true;
        for (auto i : m)
        {
            if (i.second % i.first)
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
