#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> home(n);
    vector<int> away(n);
    for(int i = 0; i< n; i++) {
        cin >> home[i] >> away[i];
    }
    int counter = 0;
    for(auto x : home){
        for(auto y: away){
            if( x == y){
                counter++;
            }
        }
    }
    cout << counter << endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}