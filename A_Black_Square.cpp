#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    vector<int> calories(4);
    for(int i = 0; i< 4; i++) {
        cin  >> calories[i];
    }
    string s;
    cin >> s;
    int burned = 0;
    for(auto x : s){
        int digit = x - '0';
        burned += calories[digit-1];
    }
    cout << burned;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
