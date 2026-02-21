#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, sol = 0;
    if(!(cin >> n)) return 0;
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        sol += (a + b + c >= 2);
    }
    cout << sol << "\n";
    return 0;
}