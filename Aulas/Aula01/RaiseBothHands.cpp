#include <bits/stdc++.h>
using namespace std;

int main (){
    int L;
    int R;

    cin >> L>> R;

    if(L==1 && R==0){
        cout<< "Yes \n";
    } else if(L==0 && R==1){
        cout<< "No \n";
    } else{
        cout<< "Invalid \n";
    }
    
    
}