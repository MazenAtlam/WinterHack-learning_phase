#include <bits/stdc++.h>
#define endl '\n'
#define MAX_VAL 3000

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    int i, j, n;

    cin >> n;

    vector<int> isPrime(n + 1);

    for (i = 2; i < n + 1; i++) {
        if (isPrime[i] == 0) {
            for (j = 2 * i; j < n + 1; j += i) {
                isPrime[j]++;
            }
        }
    }

    cout << isPrime[n] << endl;

    return 0;
}
