//SẮP XẾP [0 1 2]


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int lst[n];
        
        for(int j = 0; j < n; j++) {
            cin >> lst[j];
        }

        for(int k = 0; k < n; k++) {
            for(int j = 1; j < n; j++) {
                if(lst[j-1] > lst[j]){
                    int temp = lst[j-1];
                    lst[j-1] = lst[j];
                    lst[j] = temp;
            }
        }
        }

        for(int j = 0; j < n; j++) {
            cout << lst[j] << " ";
        }
        cout << endl;
    }

return 0;
}