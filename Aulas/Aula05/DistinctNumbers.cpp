#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main (){
int n, x, i;

cin>>n;

unordered_set<int>dif;


for(i=0; i<n; i++){
    cin>> x;
    dif.insert(x);
}

cout<< dif.size();
 
return 0;  
}