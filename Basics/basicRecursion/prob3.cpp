#include <iostream>

void printNto1(int n){
    if (n == 0){
        return;
    }
    std::cout<<n<<"\n";
    printNto1(n-1);
}
int main(){
    int n;
    std::cout<<"Input your number: ";
    std::cin>>n;
     printNto1(n);
}