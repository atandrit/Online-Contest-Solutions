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
        int s = 0;
        for (int i = 0; i < p.size(); i++)
        {
            cin >> p[i];
            s += p[i];
        }
        sort(p.begin(), p.end());
        s & 1 || p[0] == 1 ? cout << "CHEF\n" : cout << "CHEFINA\n";
    }
    return 0;
}