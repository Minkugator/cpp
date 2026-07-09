#include <iostream>
#include <string>
using namespace std;
void rev(int arr[7], int i, int n){
    if(i >= n/2){
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    rev(arr,i+1,n);
}

int main(){
    int arr[7];
    for(int i = 0; i < 7;i++){
        cin >> arr[i];
    }
    rev(arr,0,7);
    for(int i = 0; i < 7;i++){
    cout << arr[i] << " ";
    }
}