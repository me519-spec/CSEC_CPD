#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, counter = 0;
    cin >> n;
    int available_officer = 0;
    int untreated_crimes = 0;
    
    for(int i = 0; i < n; i++) {
        int event;
        cin >> event;
        if(event == -1) {
            if(available_officer > 0) available_officer--;
            else untreated_crimes++;
        }
        else {
            available_officer += event;
        }
    }
    cout << untreated_crimes << "\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}