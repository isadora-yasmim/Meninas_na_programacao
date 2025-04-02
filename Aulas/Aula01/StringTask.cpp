#include <bits/stdc++.h>
using namespace std;

int main (){
    string texto;
    string ltexto;
    string ntexto;
    int i;

    cin>> texto;

    for(char c : texto) {
        ltexto += tolower(c);
    }

    for (i=0; i< ltexto.size(); i++){
        if (ltexto[i]!='a' && ltexto[i]!='e' && ltexto[i]!='i' &&ltexto[i]!='o' && ltexto[i]!='u' && ltexto[i]!='y' ){
            ntexto+='.';
            ntexto+= ltexto[i];
        }
    }

    cout << ntexto;

    return 0;
}
  