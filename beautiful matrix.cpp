#include <bits/stdc++.h>
using namespace std;

void solve() {
    pair <int, int> current_pos;
    for(int i = 1; i < 6; i++ ) {
        for(int j = 1; j < 6; j++) {
            int x;
            cin >> x;
            if(x == 1) {
                current_pos= make_pair(i , j);
            }        }
    }
    int counter = 0;
    counter += abs(3 - current_pos.first) + abs(3 - current_pos.second);
    cout << counter << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
