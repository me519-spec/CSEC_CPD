#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;
    string instruction;
    cin >> instruction;
    int counter = 0;
    for(auto pos : instruction){
            if(pos == s[counter]) {
                counter+=1;
            }
    }
    cout << counter+1;  

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}