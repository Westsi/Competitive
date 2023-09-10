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

int main() {
    fastio
    int n, k;
    vi scores;
    cin >> n >> k;
    int cnt = 0;
    f(0, n) {
        int a; cin >> a;
        scores.pb(a);
    }
    int c = scores[k-1];
    f(0, n) {
        if (scores[i] >= c && scores[i] > 0) cnt++;
        else break;
    }
    cout << cnt << endl;
    return 0;
}