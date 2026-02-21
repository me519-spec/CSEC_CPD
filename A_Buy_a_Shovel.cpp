#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int k ,r;
    cin >> k >> r;
    int min_number = 1;
    while(((k*min_number)%10) != 0) {
        if( k * min_number % 10 == r) break;
        min_number += 1;
    }
    cout << min_number;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}