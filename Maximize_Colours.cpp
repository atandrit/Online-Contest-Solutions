#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        vc p_c(3);
        cin >> p_c[0] >> p_c[1] >> p_c[2];
        int t_c = 0;
        for (int i = 0; i < 3; i++)
            if (p_c[i] > 0)
            {
                t_c++;
                p_c[i]--;
            }
        sort(p_c.begin(), p_c.end(), greater<int>());
        if (p_c[0] && p_c[1])
        {
            t_c++;
            p_c[0]--;
            p_c[1]--;
        }
        if (p_c[0] && p_c[2])
        {
            t_c++;
            p_c[0]--;
            p_c[2]--;
        }
        if (p_c[1] && p_c[2])
        {
            t_c++;
            p_c[1]--;
            p_c[2]--;
        }
        cout << t_c << endl;
    }
    return 0;
}