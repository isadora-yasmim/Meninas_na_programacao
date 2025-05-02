#include <bits/stdc++.h>
using namespace std;

int main (){
int n, i, j, contador=1;
char aux;

cin>> n;

char slimes[n];

for(i=0;i<n;i++){
    cin>> slimes[i];
}

for(i=0;i<n-1;i++){
    j=i+1;
    
    if(slimes[i]!=slimes[j]){
        contador+=1;
    }
}

cout<<contador;
 
return 0;  
}