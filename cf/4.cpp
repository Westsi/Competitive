#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    if (a==2) cout << "NO" << endl;
    else
    cout << (a%2==0 ? "YES" : "NO") << endl;
    return 0;
}