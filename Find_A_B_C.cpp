#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int p2(int n)
{
    ll result = 0;
    for (int i = n; i > 0; i--)
    {
        if (!(i & (i - 1)))
        {
            result = i;
            break;
        }
    }
    return result;
}

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
        vc num(n + 1);
        for (int i = 0; i < num.size(); i++)
            cin >> num[i];
        vc res(3, 0);
        for (int i = p2(n); i > 0; i /= 2)
        {
            ll d = num[i] - num[0];
            if (d < 0)
            {
                d *= -1;
                int temp = d / i;
                if (temp == 1)
                {
                    temp = 2;
                    if ((res[0] ^ i) <= n)
                    {
                        res[0] ^= i;
                        temp--;
                    }
                    if (temp && (res[1] ^ i) <= n)
                    {
                        res[1] ^= i;
                        temp--;
                    }
                    if (temp > 0 && (res[2] ^ i) <= n)
                        res[2] ^= i;
                }
                else if (temp == 3)
                {
                    res[0] ^= i;
                    res[1] ^= i;
                    res[2] ^= i;
                }
            }
            else
            {
                int temp = d / i;
                if (temp == 1)
                {
                    if ((res[0] ^ i) <= n)
                        res[0] ^= i;
                    else if ((res[1] ^ i) <= n)
                        res[1] ^= i;
                    else
                        res[2] ^= i;
                }
            }
            sort(res.begin(), res.end());
        }
        cout << res[0] << " " << res[1] << " " << res[2] << '\n';
    }
    return 0;
}

