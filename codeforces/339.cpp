#include <bits/stdc++.h>
// C++ 17 - compile with g++
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vii vector<vi>
#define pi pair<int, int>
#define pip pair<int, pi>
#define umap unordered_map
#define uset unordered_set

#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define mk make_pair
#define ins insert
#define srt sort

#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f(a,b) for(auto i=a; i<b; i++)
#define nf(a,b) for(auto j=a; j<b; j++)
#define all(x) x.begin(), x.end()
#define tt int tnum; cin >> tnum; while(tnum--)
#define ret return 0;

#define ev(x) (x%2==0)
#define eq(x,y) (x==y)
#define neq(x,y) (x!=y)
#define gt(x,y) (x>y)
#define lt(x,y) (x<y)
#define geq(x,y) (x>=y)
#define leq(x,y) (x<=y)

int main() {
    fastio
    vi a;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') a.pb(s[i]-'0');
    }
    sort(all(a));
    cout << a[0];
    for (int i = 1; i < a.size(); i++) {
        cout << '+';
        cout << a[i];
    }
    cout << endl;
    return 0;
}