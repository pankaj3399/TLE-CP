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
        string s;
        cin >> s;
        int streak = 0;
        int currStreak = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                currStreak++;
            }
            else
            {
                if (currStreak == 1)
                {
                    ans += 1;
                }
                else if (currStreak == 2)
                {
                    ans += 2;
                }
                streak = max(streak, currStreak);
                currStreak = 0;
            }
        }
        if (currStreak == 1)
        {
            ans += 1;
        }
        else if (currStreak == 2)
        {
            ans += 2;
        }
        streak = max(streak, currStreak);

        if (streak > 2)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }

    return 0;
}