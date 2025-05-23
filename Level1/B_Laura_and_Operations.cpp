#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define endl '\n'
// #define all(x) x.begin(), x.end()
// #define pb push_back
// #define fi first
// #define se second
// #define vi vector<int>
// #define vpi vector<pair<int, int>>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define mii map<int, int>
// #define msi map<string, int>

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        bool first = (c%2 == b%2);
        bool second = (a%2 == c%2);
        bool third = (a%2 == b%2);

        cout << first << " " << second << " " << third << "\n";
        
    }

    return 0;
}