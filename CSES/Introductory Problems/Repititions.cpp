#include <bits/stdc++.h>
using namespace std;
int main(){
    string dna = "";
    cin >> dna;
    int maxi = 1;
    int curr = 1;
    char prev = dna[0];
    for(int i=1;i<dna.size();i++){
        if(dna[i]==prev){
            curr++;
        } else {
            prev = dna[i];
            curr = 1;
        }
        maxi = max(maxi, curr);
    }
    maxi = max(maxi, curr);
    cout << maxi;
    return 0;
}