#include <bits/stdc++.h>
using namespace std;

int main (){
int i, j, n, u, repetiu;

cin>>n;

vector<string>nomes(n);

unordered_map<string, int> possessed;

for(i=0; i<n; i++){
    cin>>nomes[i];
    possessed[nomes[i]]++;
}


for(i=0; i<n; i++){
    if(possessed[nomes[i]]>1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
 
return 0;  
}