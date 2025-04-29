#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main (){
string S;
int i;
bool verificador;

//verificador=true;

cin >> S;

for(i=0;i<10;i++){
    if(S[i]!='h' && S[i+1]!='i'){
        verificador=false;
    }else{
        verificador=true;
    }
}

if(verificador){
    cout<<"Yes";
}else{
    cout<<"No";
}


} 