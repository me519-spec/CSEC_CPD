#include <bits/stdc++.h>
using namespace std;


void solve() {
    set<int> has;
    for(int i =0; i < 4; i++) {
        int t;
        cin >> t;
        has.insert(t);

    }
    cout << 4 - has.size() << endl;
    



}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}