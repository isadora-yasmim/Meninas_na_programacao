#include <bits/stdc++.h>
using namespace std;

int main (){
int n, i, j, verificador;
verificador=0;
cin>>n;

int inteiros[n];

for(i=0;i<n;i++){
    cin>>inteiros[i];
}

for (i=0; i<n-1;i++){
    for(j=i+1; j<n; j++){
        if(inteiros[j]<inteiros[i]){
            verificador=1;
        }else if(inteiros[j]==inteiros[i]){
            verificador=1;
        }
    }
   
}

if(verificador==0) {
    cout<< "Yes";
}else{
    cout<< "No";
}


return 0;
}