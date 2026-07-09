#include <iostream>
#include <string>
using namespace std;
void print(int x){
    if(x == 0){
        return;
    }
    cout << x << " ";
    print(x - 1);
}

int main(){
    int n;
    std::cin >>  n;
    print(n);
}