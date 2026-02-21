#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;

    set<char> chars;
    for(auto x : s) {
        chars.insert(x);
    }
    (chars.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}