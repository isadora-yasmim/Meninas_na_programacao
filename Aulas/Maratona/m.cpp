#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    long long power = mod_pow(2, n + 1, MOD);
    long long result = (power - 3 + MOD) % MOD;
    cout << result << endl;
    return 0;
}