#include <bits/stdc++.h>
using namespace std;

void solve() {
    int maximum = 0;
    vector<int> sums(4);
    for(int i = 0; i < 4; i++){
        cin >>sums[i];
        if(sums[i]> maximum) maximum = sums[i]; 
    }
    for(auto x: sums){
        if(maximum - x != 0 ) cout << maximum - x << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}