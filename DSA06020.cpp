#include <bits/stdc++.h>
using namespace std;

int Search(int a[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            return 1;
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
            int n;
        cin >> n;
        int x;
        cin >> x;
        int lst[n];
        for(int i = 0; i < n; i++) {
            cin >> lst[i];
        }
        int ans = Search(lst, n, x);
        cout << ans << endl;
        }

    return 0;
}