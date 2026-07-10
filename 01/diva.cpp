#include <iostream>
int main(){
    int n;
    std::cin >> n;
    bool isprime = true;
    if(n <= 1){
        isprime = false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        std::cout << "is a prime";
    }
    else{
        std::cout << "not a prinme";
    }
}