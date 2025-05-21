#include <bits/stdc++.h>
using namespace std;

struct produto{
    int a;
    int q;
};

int funcao (produto sla, int n, int x) {
    for(int i=0;i<n; i++){
        if ((produtos[i].a<= x)&&(produtos[i].q>um)){
            um=produtos[i].q;
}

int main() {
    int n, x;
    cin >> n>> x;

    

    vector <produto> produtos(n);

    for(int i=0;i<n; i++){
        cin>> produtos[i].a;
        cin>> produtos[i].q;
    }


    int um=0;
    int dois=0;
    int tres=0;

    for(int i=0;i<n; i++){
        if ((produtos[i].a<= x)&&(produtos[i].q>um)){
            um=produtos[i].q;


        }
        for(int j=0;j<n; j++){
            if (((produtos[i].a + produtos[j].a) <= x) && ((produtos[i].q + produtos[j].q)>dois)){
                dois=produtos[i].q + produtos[j].q;
            }
            
        }
        
    }

    cout<< um<< endl;


    for(int i=0;i<n; i++){
        cout<< produtos[i].a<<" ";
        cout<< produtos[i].q<<endl;
    }



    return 0;
}