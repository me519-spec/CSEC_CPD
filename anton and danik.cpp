#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, anton = 0 , danik = 0;
    if(!(cin >> n)) return;
    for(int i = 0; i < n; i++){
        char s;
        cin >> s;
        if(s == 'A') anton++;
        else{ 
            danik++;
    }
    }
    (anton > danik) ? cout << "Anton" : (anton == danik) ? cout << "Friendship" : cout << "Danik";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}