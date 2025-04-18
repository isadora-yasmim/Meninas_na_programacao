#include <iostream>

using namespace std;

int main() {
    int k;
    int r;
    cin >> k;

    if(k<60){
        cout<< "21:" <<k;
    }else if (k%60==0){
        cout<< "22:00";
    }else{
        r=k-60;
        cout<<"21:"<< r;
    }

    return 0;
}