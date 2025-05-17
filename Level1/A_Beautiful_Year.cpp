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
    int year;
    cin >> year;
    for (int i = year + 1; i <= 9012; i++)
    {
        // if i has all distinct
        // print and break;
        set<int> s;
        int ele = i;
        while (ele > 0)
        {
            s.insert(ele % 10);
            ele /= 10;
        }
        if (s.size() == 4)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}

// 1021
// /1000 - 1
// /100 - 10
// /10 -102
