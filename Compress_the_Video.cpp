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
        vc vid(n);
        for (int i = 0; i < vid.size(); i++)
            cin >> vid[i];
        vc n_vid;
        for (int i = 0; i < vid.size(); i++)
            if (vid[i] != vid[i + 1])
                n_vid.push_back(vid[i]);
        cout << n_vid.size() << '\n';
    }
    return 0;
}


