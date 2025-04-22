#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> S(8);
    for (int i = 0; i < 8; ++i) {
        cin >> S[i];
    }

    bool isNonDecreasing = true;
    for (int i = 1; i < 8; ++i) {
        if (S[i] < S[i-1]) {
            isNonDecreasing = false;
            break;
        }
    }

    bool isInRange = true;
    bool isMultipleOf25 = true;
    for (int i = 0; i < 8; ++i) {
        if (S[i] < 100 || S[i] > 675) {
            isInRange = false;
        }
        if (S[i] % 25 != 0) {
            isMultipleOf25 = false;
        }
    }

    if (isNonDecreasing && isInRange && isMultipleOf25) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}