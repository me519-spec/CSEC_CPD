#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, counter=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 1; i <n; i++) {
        if(s[i] == s[i-1]) counter++;
    }
    cout << counter << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}