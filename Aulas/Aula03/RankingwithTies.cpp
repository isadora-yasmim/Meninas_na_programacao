#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, aux;
    int r = 1;
    cin >> n;

    int pessoas[n];
    int indices[n];// armazena a posição original
    int rank[n];

    for (i = 0; i < n; i++) {
        cin >> pessoas[i];
        indices[i] = i;  
        rank[i] = 0;     
    }

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (pessoas[j] > pessoas[i]) {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;

                aux = indices[i];
                indices[i] = indices[j];
                indices[j] = aux;
            }
        }
    }

    i = 0;
    while (i < n) {
        int pontuacao = pessoas[i];
        int contador = 1;
        
        while (i + contador < n && pessoas[i + contador] == pontuacao) {
            contador++;
        }
        
        for (j = 0; j < contador; j++) {
            rank[indices[i + j]] = r;  
        }
        
        r += contador;  
        i += contador;  
    }

    for (i = 0; i < n; i++) {
        cout << rank[i] << endl;
    }

    return 0;
}