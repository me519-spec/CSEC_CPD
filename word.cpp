#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin >> s;
    int lower = 0, upper =0;
    for(auto x: s){
        if(islower(x)) lower++;
        else upper ++;
    }
    
    (lower >= upper)? transform(s.begin(), s.end(), s.begin(), ::tolower) : transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}