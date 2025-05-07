#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, contador;
    cin >> n;

    vector<int> sequence(n);
    unordered_map<int, int> repetiu;

    for(int i = 0; i < n; i++) {
        cin >> sequence[i];
        repetiu[sequence[i]]++;
    }

   contador = 0;


    unordered_map<int, int>::iterator it;
    
    for(it = repetiu.begin(); it != repetiu.end(); it++) {
        int x = it->first;    
        int count = it->second;

        if(count < x) {
            contador += count;  
        } else if(count > x) {
            contador += (count - x);
        }
      
    }

    cout << contador << endl;

    return 0;
}