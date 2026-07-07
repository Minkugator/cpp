#include <iostream>
int main(){
    int n;
    std::cout << "What should be n: \n";
    std::cin >> n;
    int count = 0;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= i; j++){
            std::cout << j;
        }
        for(int s = 1; s <= 2*(n - i); s++){
            std::cout << " ";
        }
        std::cout << "\n";
        }
        
    }


