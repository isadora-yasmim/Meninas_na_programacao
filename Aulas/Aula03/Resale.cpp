#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, x, y, comb_possiveis, max_diferenca;

    cin >> n;

    int V[n];
    int C[n];

    for (i = 0; i < n; i++) {
        cin >> V[i];
    }

    for (i = 0; i < n; i++) {
        cin >> C[i];
    }

    max_diferenca = 0;

    for (comb_possiveis = 0; comb_possiveis < (1 << n); comb_possiveis++) {
        x = 0;
        y = 0;
        for (j = 0; j < n; j++) {
            if (comb_possiveis & (1 << j)) {
                x += V[j];
                y += C[j];
            }
        }
        if (x - y > max_diferenca) {
            max_diferenca = x - y;
        }
    }

    cout << max_diferenca << endl;

    return 0;
}