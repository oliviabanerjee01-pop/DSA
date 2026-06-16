#include <iostream>
#include <string>

void printName(std::string name , int n){
    if (n==0){
        return;
    }
    std::cout<< name<<"\n";

    printName(name,n-1);
}

int main(){
    std::string name;
    std::cout<<"input name: ";
    std::cin>>name;
    int n;
    std::cout<<"input number: ";
    std::cin>>n;

    printName(name, n);

    return 0;
    
}