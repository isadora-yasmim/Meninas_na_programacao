#include <bits/stdc++.h>
using namespace std;

int main (){
int n, i;

cin>>n;

vector<int> x(n);

for(i=0; i<n; i++){
    cin>> x[i];
}

set<int> diff(x.begin(), x.end());

cout<< diff.size();
 
return 0;  
}