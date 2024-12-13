#include <bits/stdc++.h>
// #define MAX_VAL 1000001

using namespace std;

int main() {
    // int n, A;
    // int freq_arr[MAX_VAL] = {0};
    // // vector<int> freq_arr(MAX_VAL);

    // cin >> n;


    // while (n--) {
    //     cin >> A;
    //     freq_arr[A] += 1;
    // }

    // for (int i = 0; i < MAX_VAL; i++) {
    //     while (freq_arr[i]--)
    //         cout << i << " ";
    // }

    // return 0;
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int Freq_arr[100001] = {0};
	int N, A;
	cin >> N;
	while (N--)
	{
		cin >> A;
		Freq_arr[A]++;
	}
	for (int i{}; i < 100001; i++)
	{
		while (Freq_arr[i]--)
			cout << i << " ";
	}
	return 0;
}
