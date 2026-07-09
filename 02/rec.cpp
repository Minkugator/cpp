#include <iostream>
    void printname(int n,std::string name){
    if(n == 0){
        return;
    }
    std::cout << name << "\n";
    printname(int (n-1),name);
    }
int main(){
    std::string name;
    std::cin >> name;
    int n;
    std::cout << "How many times: \n";
    std::cin >> n;
    printname(n,name);
}
