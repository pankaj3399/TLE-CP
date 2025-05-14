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

    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> arr(n);
        int odd = 0;
        int anso = INT_MAX;
        int anse = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
            {
                odd++;
                int op = 0;
                ll x = arr[i];
                while (x % 2 != 0)
                {
                    x = x / 2;
                    op++;
                }
                anso = min(anso, op);
            }
            else
            {
                int op = 0;
                ll x = arr[i];
                while (x != 0 && x % 2 == 0)
                {
                    x = x / 2;
                    op++;
                }
                if (x >= 1)
                {
                    anse = min(anse, op);
                }
            }
        }
        if (odd & 1)
        {
            cout << min(anso, anse) << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}