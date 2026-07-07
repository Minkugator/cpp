#include <iostream>
int main(){
    int n;
    std::cout << "How long is the array: ";
    std::cin >> n;
    int a[n];

    std::cout << "Inputs of the arr: \n";
    for(int i = 0; i <= n -1; i++){
        std:: cin >> a[i];
    }
    for(int j = 0; j < n / 2; j++){
        int temp = a[n - j - 1];
        a[n - j - 1] = a [j];
        a[j] = temp;
    }
    std::cout << "Here is your reversed array: \n";
    for(int m = 0; m <= n - 1; m++){
        std::cout << a[m] << "\n";
    }
    return 0;
}