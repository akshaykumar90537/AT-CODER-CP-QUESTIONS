#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N + 1);  // 1-based indexing

    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    long long count = 0;

    for (int j = 1; j <= N; ++j) {
        int key = j - A[j];         // what we want from previous i + A[i]
        count += freq[key];         // add count of how many i's matched
        freq[j + A[j]]++;           // store this j as a future i
    }

    cout << count << endl;
    return 0;
}
