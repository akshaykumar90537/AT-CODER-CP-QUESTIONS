#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    unordered_map<int, int> freq;

    // Input and frequency calculation
    for (int i = 0; i < n; i++) {  
        cin >> v[i];
        freq[v[i]]++;
    }

    int maxValue = -1, maxIndex = -1;

    // Find the maximum unique number and its index
    for (int i = 0; i < n; i++) {
        if (freq[v[i]] == 1) {  // Unique number check
            if (v[i] > maxValue) {  // Find the largest unique number
                maxValue = v[i];
                maxIndex = i + 1;  // Convert 0-based index to 1-based
            }
        }
    }

    // Output the 1-based index of the maximum unique element
    cout << maxIndex << endl;

    return 0;
}
