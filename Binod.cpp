#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define fo(i, N) for (long long i = 0; i < (N); ++i)
#define foe(i, N) for (long long i = 1; i <= (N); ++i)
#define fox(i, x, b) for (long long i = (x); i < (b); ++i)
#define forev(i, N) for (long long i = (N); i >= 0; --i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vc vector<long long>

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

void t_soln()
{
    ll n, q;
    cin >> n >> q;
    vc a(n + 1, 0);
    foe(i, n) cin >> a[i];
    vector<vc> set_bits(n + 1, vc(64, 0));
    vc isb(64, 0);

    foe(i, n)
    {
        ll tmp = a[i];
        ll k = 0;
        while (tmp)
        {
            if (tmp & 1)
                isb[k]++;
            tmp = tmp >> 1;
            k++;
        }
        fo(j, 64) set_bits[i][j] = isb[j];
    }

    while (q--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll n1 = r1 - l1 + 1;
        ll n2 = r2 - l2 + 1;
        ll c1 = set_bits[r1][k] - set_bits[l1 - 1][k];
        ll c2 = set_bits[r2][k] - set_bits[l2 - 1][k];
        cout << c1 * (n2 - c2) + (n1 - c1) * c2 << '\n';
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("00dbg.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        t_soln();
    }
    return 0;
}
