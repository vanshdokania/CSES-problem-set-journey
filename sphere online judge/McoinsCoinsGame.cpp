#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool f(int k, int l, int n) {
    vector<bool> dp(n+1, false); 
    for (int i = 1; i <= n; i++) {
        if ((i - 1 >= 0 && !dp[i - 1]) ||
            (i - k >= 0 && !dp[i - k]) ||
            (i - l >= 0 && !dp[i - l])) {
            dp[i] = true;
        }
    }
    return dp[n];
}


int main(){
    int k, l, m;
    cin >> k >> l >> m;
    string ans = "";
    for(int i=0;i<m;i++) {
        int x;
        cin >> x;
        if(f(k, l, x)) ans += "A";
        else ans += "B";
    }
    cout << ans;
    return 0;
}