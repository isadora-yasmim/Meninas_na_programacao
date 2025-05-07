#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> nomes(n);
    unordered_map<string, int> possessed;

    for(int i = 0; i < n; i++) {
        cin >> nomes[i];
    }

    for(int i = 0; i < n; i++) {
        if(possessed[nomes[i]] ==0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
        possessed[nomes[i]]++;
    }

    return 0;
}