#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    vector<int> letters('Z' + 1);
    string pangram;
    int i, n;

    cin >> n;
    cin >> pangram;

    transform(pangram.begin(), pangram.end(), pangram.begin(), ::toupper);

    for (i = 0; i < n; i++)
        letters[pangram[i]]++;

    for (i = 'A'; i < 'Z' + 1; i++)
        if (letters[i] == 0) {
            cout << "NO" << endl;

            return 0;
        }

    cout << "YES" << endl;

    return 0;
}
