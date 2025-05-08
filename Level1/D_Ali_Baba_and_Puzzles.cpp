#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mii map<int, int>
#define msi map<string, int>

bool possible(ll a, ll b, ll c, ll d)
{
    ll out1 = a * b + c;
    ll out2 = a * b - c;
    ll out3 = a + b - c;
    ll out4 = a + b * c;
    ll out5 = a - b * c;
    ll out6 = a - b + c;
    if (out1 == d || out2 == d || out3 == d || out4 == d || out5 == d || out6 == d)
    {
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (possible(a, b, c, d))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
