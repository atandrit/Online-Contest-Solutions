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
        string a, b;
        cin >> a >> b;
        unordered_map<char, int> m;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
                m.insert({b[i], i});
        }
        cout << m.size() << '\n';
    }
    return 0;
}