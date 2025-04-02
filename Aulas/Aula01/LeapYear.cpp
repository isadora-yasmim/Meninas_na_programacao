#include <bits/stdc++.h>
using namespace std;

int main (){
    int Y;

    cin>> Y;
    if ((Y%4!=0) || (Y%100==0 && Y%400!=0)){
        cout<< 365;
    }else if ((Y%4==0 && Y%100!=0) || (Y%400==0)){
        cout<< 366;
    }
    
}