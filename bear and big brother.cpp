#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int a, b, counter=0;
    if(!(cin >> a >> b)) return;
    while(  a <= b ) {
        b *=2;
        a *=3 ;
        counter += 1;
    }
    cout << counter << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}