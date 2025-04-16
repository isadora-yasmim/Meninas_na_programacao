#include <bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main (){
string S;

cin >> S;
char num[S.length()]; 
strcpy(num, S.c_str()); 

cout << num[0]*num[2];

return 0;

}