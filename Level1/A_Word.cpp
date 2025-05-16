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
    string s;
    cin >> s;
    int n= s.size();
    int u = 0;
    int l = 0;
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            l++;
        } else {
            u++;
        }
    }
    if(l>=u){
        // print lower case
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        // print uppercase
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;    

    return 0;
}