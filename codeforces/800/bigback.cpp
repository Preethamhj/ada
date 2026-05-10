#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long bestA = -1, secondA = -1;
    long long bestB = -1, secondB = -1;
    int idxA = -1, idxB = -1;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        // Update appetizer maxima
        if (a > bestA) {
            secondA = bestA;
            bestA = a;
            idxA = i;
        } else if (a > secondA) {
            secondA = a;
        }

        // Update entree maxima
        if (b > bestB) {
            secondB = bestB;
            bestB = b;
            idxB = i;
        } else if (b > secondB) {
            secondB = b;
        }
    }

    long long ans;

    if (idxA != idxB) {
        ans = bestA + bestB;
    } else {
        ans = max(bestA + secondB, secondA + bestB);
    }

    cout << ans << '\n';
    return 0;
}