#include <iostream>
int main (){
    int n;
    int count = 0;
    std::cout<<"Enter Your Number: ";
    std::cin>>n;
    for (int i=1; i<=n; i++){
        if (n%i == 0){
            count++;
        }}
    if (count == 2 ){
        std::cout<<"Yes it's a prime number!!";
    }
    else{
        std::cout<<"No it's not a prime number";
    }
    return 0;
}