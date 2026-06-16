#include <iostream>

void printNumbers(int n){
    if( n == 0){
        return;
    }
    printNumbers(n-1);
    std::cout<< n<<"\n";

}
int main(){
    int n;
    std::cout<<"Print numbers: ";
    std::cin>> n;
    printNumbers(n);
}
    