#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int count = 0;
    while (n>0){
        n = n/10;
        count++;}

    std::cout<<count;










    return 0;
}