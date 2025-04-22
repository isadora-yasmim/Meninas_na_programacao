#include <iostream>

using namespace std;

int main() {
    long long X;
    cin >> X;

    long long fatorial = 1;
    int N = 1;

    while (fatorial < X) {
        N++;
        fatorial *= N;
    }

    cout << N << endl;
    return 0;
}