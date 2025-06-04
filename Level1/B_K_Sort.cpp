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

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vi temp;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= mx)
        {
            mx = arr[i];
        }
        else
        {
            temp.push_back(mx - arr[i]);
        }
    }
    ll ans = 0;
    sort(temp.begin(), temp.end());
    ll sz = temp.size();
    for (int i = 0; i < sz; i++)
    {
        if (i == 0)
        {
            ans += (temp[i] * (sz + 1));
        }
        else
        {
            ans += ((temp[i] - temp[i - 1]) * (sz - i + 1));
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}