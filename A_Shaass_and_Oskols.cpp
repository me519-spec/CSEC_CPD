#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> online(n);
    for (int i = 0; i < n; i++) {
        cin >> online[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        int wire_idx = x - 1;
        if (wire_idx > 0) {
            online[wire_idx - 1] += (y - 1);
        }
        if (wire_idx < n - 1) {
            online[wire_idx + 1] += (online[wire_idx] - y);
        }
        online[wire_idx] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << online[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}