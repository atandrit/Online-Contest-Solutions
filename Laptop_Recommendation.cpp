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
        int N;
        cin >> N;
        vc rec(N), n(11);
        for (int i = 0; i < rec.size(); i++)
        {
            cin >> rec[i];
            n[rec[i]]++;
        }
        int r, flag = 0;
        for (int i = 1; i < n.size(); i++)
        {
            flag = max(flag, n[i]);
            if (flag == n[i] && flag != 0)
                r = i;
        }
        sort(n.begin(), n.end());
        n[9] == n[10] ? cout << "CONFUSED\n" : cout << r << '\n';
    }
    return 0;
}