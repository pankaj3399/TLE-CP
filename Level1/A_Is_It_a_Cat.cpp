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

bool possible(ll n, string &s)
{
    // eow - fail
    int order = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (order == 0)
        {
            if (s[i] != 'm' && s[i] != 'M')
            {
                return false;
            }
            else
            {
                order = 1;
            }
        }

        else if (order == 1)
        {
            if (s[i] != 'm' && s[i] != 'M')
            {
                if (s[i] == 'e' || s[i] == 'E')
                {
                    order = 2;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (order == 2)
        {
            if (s[i] != 'e' && s[i] != 'E')
            {
                if (s[i] == 'o' || s[i] == 'O')
                {
                    order = 3;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (order == 3)
        {
            if (s[i] != 'o' && s[i] != 'O')
            {
                if (s[i] == 'w' || s[i] == 'W')
                {
                    order = 4;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (order == 4)
        {
            if (s[i] != 'w' && s[i] != 'W')
            {
                return false;
            }
        }
    }
    return order == 4;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll n;
        string s;
        cin >> n >> s;
        if (possible(n, s))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
