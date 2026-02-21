#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    int right = 0, left = cards.size() - 1;
    int sereja = 0, dima = 0;
    bool sereja_turn = true;
    for(int i = 0; i < n; i++)  {
        if(sereja_turn) {
            if(cards[right] > cards[left]){
                sereja += cards[right];
                right++;
            }
            else {
                sereja += cards[left];
                left--;
            }
            sereja_turn= false;
        } else {
            if(cards[right] > cards[left]){
                dima += cards[right];
                right++;
            }
            else {
                dima += cards[left];
                left--;
            }
            sereja_turn = true;
        }
    }
    cout << sereja << " " << dima << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}