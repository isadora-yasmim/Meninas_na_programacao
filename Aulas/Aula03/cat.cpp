#include <bits/stdc++.h>
using namespace std;

int main (){
int n, i, j;

cin>> n;

string str[n], novastr;

for(i=0; i<n; i++){
    cin>> str[i];
}

for (i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
        if(str[j].length()>str[j+1].length()){
            swap(str[j], str[j + 1]);
        }
        
    }
   
}

for (i=0; i<n; i++) {
    novastr += str[i];
}

cout<< novastr;
 
return 0;    
}