#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==2 || n==3){
        cout << "NO SOLUTION";
        return 0;
    }
    for(long long i=2;i<=n;i=i+2){
        cout << i << " ";
    }
    for(long long i=1;i<=n;i=i+2){
        cout << i << " ";
    }
    return 0;
} 