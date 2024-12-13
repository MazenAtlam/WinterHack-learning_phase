#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> letters('z' + 1);
    string str1, str2;
    int n;

    getline(cin, str1);
    getline(cin, str2);

    for (char ch : str1)
        letters[ch]++;

    for (char ch : str2) {
        if (letters[ch] == 0 && ch != ' ' && ch != '\n') {
            cout << "NO" << endl;

            return 0;
        } else
            letters[ch]--;
    }

    cout << "YES" << endl;

    return 0;
}
