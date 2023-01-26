#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<vector<int>>

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
        set<int> s;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int a;
                cin >> a;
                p[i].push_back(a);
            }
        }
        for (int i = 0; i < p.size(); i++)
        {
            for (int j = 0; j < p.size(); j++)
            {
                for (auto l : p[i])
                    s.insert(l);
                for (auto l : p[j])
                    s.insert(l);
                if (s.size() == 5)
                {
                    flag = false;
                    break;
                }
                s.clear();
            }
            if (!flag)
                break;
        }
        !flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
