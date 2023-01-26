#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t_c;
    cin >> t_c;
    while (t_c--)
    {
        int n;
        cin >> n;
        vc a(n), b(n), count1, count2;
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        count1 = a;
        for (int i = 0; i < b.size(); i++)
            cin >> b[i];
        count2 = b;
        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());
        //count1.erase(unique(count1.begin(), count1.end()), count1.end());
        //count2.erase(unique(count2.begin(), count2.end()), count2.end());
        for (int i = 0; i < a.size(); i++)
            a[i] = lower_bound(count1.begin(), count1.end(), a[i]) - count1.begin();
        for (int i = 0; i < b.size(); i++)
            b[i] = lower_bound(count2.begin(), count2.end(), b[i]) - count2.begin();
        int tmp = 0, res = 0;
        vc d(n), e(n), f, c(n);
        for (int i = 0; i < n; i++)
        {
            c[a[i]] = b[i];
            d[i] = a[i] + b[i];
            e[b[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            f.insert(upper_bound(f.begin(), f.end(), c[i]), c[i]);
            d[e[c[i]]] -= lower_bound(f.begin(), f.end(), c[i]) - f.begin();
        }
        for (auto i : d)
            tmp = max(i, tmp);
        for (auto i : d)
            res += (i == tmp);
        cout << res << endl;
    }
    return 0;
}