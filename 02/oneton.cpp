#include <iostream>
#include <string>
using namespace std;
void print(int a, int x){
 if(a > x){
    return ;
 }
 cout << a << " ";
 print(a+1, x);
 return;
}

int main(){
    int n;
    std::cin >>  n;
    print(1,n);
}