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
        int t = 1;
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = n;
            n--;
            if (i < a.size() - 1)
            {
                i++;
                a[i] = t;
                t++;
            }
        }
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}