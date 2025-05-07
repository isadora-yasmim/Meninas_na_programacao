#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> chefs(n);
    
    for(int i=0; i<n; i++){
        cin>> chefs[i].first>> chefs[i].second;
    }
    
    for(int i=0; i<n; i++){
        cout<< chefs[i].first<< chefs[i].second;
    }
    
    

    return 0;
}