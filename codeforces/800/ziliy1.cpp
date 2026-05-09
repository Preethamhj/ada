#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;

        for (int i = n - 1; i >= 0; i--) {

            if (i < n - 1 && a[i] <= a[i + 1]) {
                a[i] += a[i + 1];
            }

            if (a[i] > 0) {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}