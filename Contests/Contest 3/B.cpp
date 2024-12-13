#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    int n, k;

    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);
    int i, count_cookies = 0;
    bool has_all_ingredients = true;

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        cin >> b[i];

        if (b[i] < a[i] && k < (a[i] - b[i])) {
            has_all_ingredients = false;
            break;
        }
        if (b[i] >= a[i])
            b[i] -= a[i];
        else {
            k -= a[i] - b[i];
            b[i] = 0;
        }
    }

    while (has_all_ingredients) {
        count_cookies++;

        for (i = 0; i < n; i++) {

            if (b[i] < a[i] && k < (a[i] - b[i])) {
                has_all_ingredients = false;
                break;
            }
            if (b[i] >= a[i])
                b[i] -= a[i];
            else {
                k -= a[i] - b[i];
                b[i] = 0;
            }
        }
    }
    cout << count_cookies << endl;

    return 0;
}
