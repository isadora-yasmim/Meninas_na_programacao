#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main (){
string S;
int i,j,tam, verificador;
verificador=0;

cin >> S;
tam=S.length();

for(i=0;i<tam-1;i++){
    for(j=i+1;j<tam;j++){
        if(i%2==0 && S[i]!='h'){
            verificador=1;
            //cout<< "No";
            break;
        }else if (j%2==1 && S[j]!='i'){
            verificador=1;
            //cout<< "No";
            break;
        }
    }
}

if(verificador==1) {
    cout<< "No";
}else{
    cout<< "Yes";
}


} 