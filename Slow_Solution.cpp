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
        int t_max, n_max, n_sum;
        cin >> t_max >> n_max >> n_sum;
        int res = 0;
        while (t_max-- && n_sum)
        {
            if (n_max <= n_sum)
            {
                res += (n_max * n_max);
                n_sum -= n_max;
            }
            else
            {
                res += (n_sum * n_sum);
                break;
            }
        }
        cout << res << '\n';
    }
    return 0;
}