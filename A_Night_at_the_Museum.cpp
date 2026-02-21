#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string given;
    cin >> given;
    
    int total_moves = 0;
    char current_pos = 'a'; 

    for (int i = 0; i < given.size(); i++) {
        char target = given[i];
        int diff = abs(target - current_pos);
        total_moves += min(diff, 26 - diff);
        current_pos = target;
    }
    
    cout << total_moves << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}