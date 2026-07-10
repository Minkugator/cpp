#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int hash[10001] = {0};
    for(int j = 0; j < n; j++){
        hash[arr[j]]++;
    }
    int max = 0;
    int answer = -1;
    for(int k = 0; k < 10001; k++){
        if(hash[k] > max){
            max = hash[k];
            answer = k;
        }
    }
    
    cout << "The most frequent element is : " << answer << " and is repeated " << hash[answer] << " times.";
}