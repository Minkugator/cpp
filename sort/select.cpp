#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> y(n);
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }
    for(int j = 0; j < n - 1; j++){
        int min_index = j;
        for(int k = j + 1; k < n; k++){
            if(y[k] < y[min_index]){
                min_index = k;
            }
        }
        swap(y[j],y[min_index]);
    }
    for(int x = 0; x < n; x++){
        cout << y[x] << " ";
    }
}