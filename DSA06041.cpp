// SỐ XUẤT HIỆN NHIỀU NHẤT

#include <bits/stdc++.h>
using namespace std;

void NhapMang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void Solve(int a[], int n) {
    int count[1000009] = {0};
    int res = -1;
    for(int i = 0; i < n; i++) {
        count[a[i]]++;
        if(count[a[i]] > n/2) {
            res = a[i];
            break;
        }
    }

    if(res != -1) cout << res << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        NhapMang(a, n);
        Solve(a, n);
    }
    return 0;
}