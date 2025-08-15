#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> colors;
vector<vector<int>> dp(105, vector<int>(105, -1));

ll g(int i, int j) {
    int sum = 0;
    for(int a=i;a<=j;a++) sum = (sum%100 + colors[a]%100) % 100;
    return sum;
}

ll f(int i, int j) {
    if(i == j) return dp[i][j] = 0;
    if(dp[i][j] != -1) return dp[i][j];
    ll result = INT_MAX;
    for(int k=i;k<j;k++)
        result =  min((f(i, k) + f(k+1, j)) + (g(i, k) * g(k+1, j)) , result);   
    return dp[i][j] = result;
}

int main(){
    int n;
    while(cin >> n){
        colors.resize(n);
        for(int x=0;x<n;x++) cin >> colors[x];
        cout << f(0, n-1) << "\n";
        colors.clear();
        dp.assign(105, vector<int>(105, -1));
    }
}