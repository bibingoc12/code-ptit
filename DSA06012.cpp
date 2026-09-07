//PHẦN TỬ LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int lst[n];
        for(int j = 0; j < n; j++) {
            cin >> lst[j];
        }

        sort(lst, lst + n);

        for(int j = n-1; j >= n-k; j--) {
            cout << lst[j] << " ";
        }
        cout << endl;
    }

    return 0;
}