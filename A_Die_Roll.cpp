#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int y, w;
    cin >> y >> w;
    int rolls = 7 - max(y, w);
    if(rolls == 6) cout << "1/1";
    else if(rolls == 1 || rolls == 5) cout << to_string(rolls) << "/6";
    else if(rolls%2 == 0) cout << to_string(rolls/2) << "/3";
    else cout << "1/2";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}