//SẮP XẾP NỔI BỌT

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n) {
    for(int i = 0; i < n; i++) {
        bool button = false;
        
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                button = true;
            }
        }
        if(!button) {
            break;
        }
        cout << "Buoc " << i+1 << ": ";
        for(int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    BubbleSort(a, n);

    return 0;
}