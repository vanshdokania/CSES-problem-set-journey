#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
int f(vector<int>& arr, int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];
    int result = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(x-arr[i]<0) continue;
        int sub = f(arr, x - arr[i]);
        if (sub != INT_MAX) result = min(result, 1 + sub);    
    }
    return dp[x] = result;
}
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    dp.resize(x+2, -2);
    int ans = f(arr, x);
    if(ans==INT_MAX) cout << -1;
    else cout << ans;
    return 0;
}