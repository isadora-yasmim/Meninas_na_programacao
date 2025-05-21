#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int vertices = (2 << n) - 1;
    cout << vertices << endl;

    struct arvore{
        int x;
        arvore *esq;
        arvore *dir;
    
        arvore() : x(0), esq(nullptr), dir(nullptr) {}
        arvore(int y) : x(y), esq(nullptr), dir(nullptr) {}
        arvore(int y, arvore *esq, arvore *dir) : x(y), esq(esq), dir(dir) {}
    }


}