#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> mp;
    vector<int> nums;
    for(int i=1;i<=n;i++) mp[i]=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second==0){
            cout<<x.first;
            break;
        }
    }
    return 0;
}
