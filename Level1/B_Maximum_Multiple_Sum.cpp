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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    // x*(k)*(k+1)/2
    // k = n/x;
    // 56*2/2
    ll ans = -1;
    ll mx = -1;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = 2; i <= n; i++)
        {
            ll k = n / i;
            ll temp = i * (k) * (k + 1) / 2;
            if (temp > mx)
            {
                mx = temp;
                ans = i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}