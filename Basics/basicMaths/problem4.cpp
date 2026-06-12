#include <iostream>

int main(){
    int a;
    int b;
    std::cout<< "Enter your two numbers: ";
    std::cin>>a>>b;
    while (a>0 && b>0){
        if (a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if (a==0){
        std::cout<<"The GCD is: "<< b;

    }
    else{
        std::cout<<"The GCD is: "<< a;
    }
    
return 0;
}