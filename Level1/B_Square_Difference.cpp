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
        ll a, b;
        cin >> a >> b;
        if (a - b != 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll res = a + b;
            bool isPrime = true;
            for (int i = 3; i <= sqrt(res); i += 2)
            {
                if (res % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}