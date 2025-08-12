#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> st;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    cout << st.size();
    return 0;
}