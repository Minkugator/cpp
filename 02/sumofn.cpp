#include <iostream>
#include <string>
using namespace std;
int whole(int sum,int x,int a){
    if(a > x){
        return sum;
    }
    sum = sum + a;
    return whole(sum,x,a+1);
}

int main(){
    int n;
    std::cin >>  n;
    cout << whole(0,n,1);
}