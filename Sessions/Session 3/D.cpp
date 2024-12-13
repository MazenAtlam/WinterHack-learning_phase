#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

int main() {
    int q, n, l, m, r, i;

    cin >> n >> q;
    vector<int> array(n);

    for (i = 0; i < n; i++)
        cin >> array[i];

    // sort(array);

    l = 0;
    r = n - 1;
    for (i = 0; i < q; i++) {
        int x;
        cin >> x;
        m = (l + r) / 2;

    }

    return 0;
}
