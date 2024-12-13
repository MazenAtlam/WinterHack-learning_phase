#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define MAX_VAL 1e12

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    ll n, q;
    string cases;
    int i, j;

    cin >> q;

    while (q--) {
        cin >> n;
        vector<int> isPrime(MAX_VAL + 1);

        for (i = 2; i < MAX_VAL + 1; i++) {
            if (isPrime[i] == 0) {
                for (j = 2 * i; j < MAX_VAL + 1; j += i) {
                    isPrime[j]++;
                }
            }
        }

        cout << isPrime[n] << endl;
    }

    return 0;
}
