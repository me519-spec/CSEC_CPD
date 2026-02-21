#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    if(!(cin >> n)) return;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for(auto x: nums) cout << x << " ";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}