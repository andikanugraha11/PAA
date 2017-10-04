#include <bits/stdc++.h>

using namespace std;

int nilaiMinimumAbsolut(int n, vector <int> arr) {
    // Lengkapi hanya fungsi ini saja
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = nilaiMinimumAbsolut(n, arr);
    cout << result << endl;
    return 0;
}