#include <bits/stdc++.h>
using namespace std;

int main (){
int n, i, j, aux;

cin >> n;

int cubos[n];

for (i=0; i<n;i++){
    cin >> cubos[i];
} 

for (i=0; i<n-1;i++){
    for(j=i+1; j<n; j++){
        aux=cubos[i];

        if(cubos[j]<cubos[i]){
            cubos[i]=cubos[j];
            cubos[j] = aux;
        }
    }
   
}


for (i=0; i<n;i++){
    cout << cubos[i] << " ";
}
  
return 0;
    
}
