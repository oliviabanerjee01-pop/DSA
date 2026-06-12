#include <iostream>

int main(){
    int c;
    std::cout<<"Enter your number: ";
    std::cin>>c;
    int original = c;
    int reverse = 0;
    while (c>0){
        int digit = c%10;
        reverse = reverse*10 + digit;
        c = c/10;

    }
    if (original == reverse){
        std::cout<<"Yes it's a palindrome!! :) ";
    }
    else{
        std::cout<<"No its not a palindrome :( ";
    }

    return 0;
}
