// I don't want to fucking talk about this

#include <bits/stdc++.h>
// C++ 17 - compile with g++
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vii vector<vi>
#define pi pair<int, int>
#define pip pair<int, pi>
#define ps pair<string, string>
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

string replace(string s, int index, ps rule) {
    string r;
    r = s.substr(0, index);
    r += rule.se;
    r += s.substr(index + rule.fi.size());
    return r;
}

string consStrFromCharQueue(queue<char> cq) {
    string r;
    while (!cq.empty()) {
        r += cq.front();
        cq.pop();
    }
    return r;
}

int main() {
    fastio
    ps a, b, c; // rules
    int moves;
    string ss, es;
    cin >> a.fi >> a.se;
    cin >> b.fi >> b.se;
    cin >> c.fi >> c.se;
    cin >> moves >> ss >> es;
    pair<string, pair<int, int>> rlen[3];
    rlen[0] = (mk(a.fi, mk(a.fi.size(), 1)));
    rlen[1] = (mk(b.fi, mk(b.fi.size(), 2)));
    rlen[2] = (mk(c.fi, mk(c.fi.size(), 3)));
    int maxrulelen = max(rlen[0].se.fi, max(rlen[1].se.fi, rlen[2].se.fi));

    // brute force - make a vector<set<string>> to store all unique words at each step because moves <= 15
    vector<set<pair<string, string>>> v; // rules used to get to the word from base
    // map<string, string> v[15];
    
    for (int i = 0; i < moves; i++) {
        v.pb({});
    }
    v[0].ins(mk("", ss));
    for (int i = 0; i < moves; i++) {
        for (pair<string, string> j : v[i]) {
            queue<char> cq;
            for (int k = 0; k < maxrulelen; k++) {
                cq.push(j.se[k]);
            }
            for (int k = maxrulelen; k < j.se.size(); k++) {
                string scq = consStrFromCharQueue(cq);
                cq.push(j.se[k]);
                cq.pop();
                for (int l = 0; l < rlen.size(); l++) {
                    string newss = scq.substr(scq.size()-rlen[l].se.fi);
                    if (eq(newss, rlen[l].fi)) {
                        ps p;
                        ps rulep;
                        switch (rlen[l].se.se) {
                            case 1: {rulep = a; break;}
                            case 2: {rulep = b; break;}
                            case 3: {rulep = c; break;}
                        }
                        p.se = replace(j.se, k+3-rlen[l].se.fi, rulep);
                        p.fi = j.fi + "\n" + to_string(rlen[l].se.se) + to_string(k+3-rlen[l].se.fi);
                        v[i+1].ins(p);
                    }
                }
            }
        }
    }
    for (ps p : v[moves]) {
        cout << p.fi << endl;
    }
    ret
}