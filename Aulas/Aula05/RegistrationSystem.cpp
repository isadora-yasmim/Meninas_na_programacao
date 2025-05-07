#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> requests(n);
    unordered_map<string, int> repetiu;

    for(int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    for(int i = 0; i < n; i++) {
        if(repetiu[requests[i]] ==0) {
            cout <<"OK"<< endl;
        } else {
            cout << requests[i]<<repetiu[requests[i]]<< endl;
        }
        repetiu[requests[i]]++;
    }

    return 0;
}