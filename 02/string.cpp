#include <iostream>
#include <string>
using namespace std;
void pal(string s){
    bool ispal = true;
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] != s[n-i-1]){
            ispal = false;
        }
    }
cout << ispal;
}
int main(){
    string que;
    std::getline(std::cin,que);
    pal(que);
}