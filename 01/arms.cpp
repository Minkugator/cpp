#include <iostream>
#include <cmath>
int main(){
    int n;
    std::cin >> n;
    int digit = 0;
    int sum = 0;
    int og = n;
    while(n > 0){
        n = n / 10;
        digit++;
    }
    n = og;
    for(int i = 1; i <= digit; i++){
        int last = n % 10;  
        n = n / 10;
        sum = sum + pow(last,digit);
    }
    if(og == sum){
        std::cout << "It is armstrong";
    }
    else{
        std::cout << "It is not armstrong";
    }
}
