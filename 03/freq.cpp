#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int j = 0; j < n; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }
 
    int hash[max + 1] = {0};
    for(int k = 0; k < n; k++){
        hash[arr[k]] = hash[arr[k]] + 1;
    }
    int q;
    cout << "What no. you want to find";
    cin >> q;
    cout << hash[q];
}