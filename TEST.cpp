#include <iostream>

int main(){
    int n;
    while(n!=42){
        std::cin >> n;
        if (n==42)  break;
        std::cout << n << std::endl;
    }
}
