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
        int swaps_odd = 0;
        int swaps_even = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 != arr[i] % 2)
            {
                if (i % 2 == 1)
                {
                    swaps_odd++;
                }
                else
                {
                    swaps_even++;
                }
            }
        }
        // cout << swaps_even << " " << swaps_odd << endl;
        if (swaps_even != swaps_odd)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << swaps_even << "\n";
        }
    }

    return 0;
}