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
        int n, h, m;
        cin >> n >> h >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[i] = a * 60 + b;
        }
        // cout << "Hello" << "\n";
        sort(arr.begin(), arr.end());
        int toFind = h * 60 + m;
        int ans = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= toFind)
            {
                ans = arr[i] - toFind;
                break;
            }
        }
        if (ans == INT32_MAX)
        {
            ans = 24 * 60 - toFind + arr[0];
        }
        cout << ans / 60 << " " << ans % 60 << "\n";
    }
    return 0;
}