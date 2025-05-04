#include <bits/stdc++.h>
using namespace std;

int main (){
int N, M, i, j, a, b, A, B ;
bool verificador = false;

cin>> N >> M;

char S[N][N];
char T[M][M];

for(i=0; i<N; i++){
    for(j=0; j<N; j++){
        cin>> S[i][j];
    }
}

for(i=0; i<M; i++){
    for(j=0; j<M; j++){
        cin>> T[i][j];
    }
}

A=-1;
B=-1;

 for(int i = 0; i <= N - M && !verificador; i++) {
    for(int j = 0; j <= N - M && !verificador; j++) {
        bool igual = true;
        
        for(int a = 0; a < M && igual; a++) {
            for(int b = 0; b < M && igual; b++) {
                if(S[i + a][j + b] != T[a][b]) {
                    igual = false;
                }
            }
        }
        
        if(igual) {
            A = i + 1; 
            B = j + 1;
            verificador = true;
        }
    }
}

cout << A << " " << B;
 
return 0;  
}