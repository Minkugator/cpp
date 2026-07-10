#include <iostream>
int main() {
    int n;
    std::cout << " What is n: ";
    std::cin >> n;
    int og = n;
    int rev = 0;
     while (n > 0){
        int last = n % 10;
        rev = rev*10 + last;
        n = n / 10;
        
 }
 if(rev == og){
    std::cout << "Palindrome";
 }
 else{
    std::cout << "Not a Palindrome";
 }
}
