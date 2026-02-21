#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, groups = 0;
    cin >> n;
    int previous = 0;
    while(n--) {
        int polaritiy;
        cin >> polaritiy;
        if(polaritiy != previous){
            groups++;
        }
        previous = polaritiy;

    }
    cout << groups << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}