#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s1, s2;
    if(!(cin >> s1 >> s2)) return;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    int result = s1.compare(s2);
    (result < 0) ? result = -1 : (result > 0) ? result =1 : result = 0;
    cout << result << "\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}