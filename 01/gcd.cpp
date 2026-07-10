#include <iostream>
int main(){
    int n1,n2;
    std::cout << "What is the first number: ";
    std::cin >> n1;
    std::cout << "What is the first number: ";
    std::cin >> n2;
    int og1 = n1;
    int og2 = n2;
    int gcd = 1;
    if(og1 == og2){
        std::cout << "GCD is " << og1;
    }
    else{ 
        for(int i = 1; i <= og1 && i <= og2;i++){
            if(og1 % i == 0 && og2 % i == 0){
                gcd = i;
            }
        }
   }
   std::cout << gcd;
}
