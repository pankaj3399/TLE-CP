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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        int streak = 1;
        int currPar = arr[0] & 1;
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] & 1) == currPar)
            {
                streak++;
            }
            else
            {
                ans += streak - 1;
                streak = 1;
                currPar = (arr[i] & 1);
            }
        }
        ans += streak - 1;
        cout << ans << "\n";
    }
    return 0;
}