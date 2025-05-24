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
    // first digit can't be anything other than 1
    // last digit can't be greater than 8 (9+9 will give you max)
    // any other digit >= 1
    // the logic is derived from concept of carry
    // there will always be carry from 2nd digit to end (from last)
    int flag = 1;
    while (n >= 10)
    {
        int digit = n % 10;
        if (flag == 1)
        {
            flag = 0;
            if (digit > 8)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (digit == 0)
        {
            cout << "NO" << endl;
            return;
        }
        n /= 10;
    }

    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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