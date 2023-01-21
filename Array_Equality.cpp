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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int count = -1;
        for (auto it : m)
        {
            count = max(count, it.second);
        }
        if (count <= (n + 1) / 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}