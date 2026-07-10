#include <iostream>
int main(){
    int n;
    std::cout << "What should be n: \n";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }

