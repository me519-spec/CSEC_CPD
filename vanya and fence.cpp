#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n , h;
    if(!(cin >> n>>h)) return;
    int width = 0;
    for(int i = 0; i < n; i++) {
        int height;
        cin >> height;
        if(height > h){
            width += 2;
        }
        else {
            width++;
        }
    }
    cout << width << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
