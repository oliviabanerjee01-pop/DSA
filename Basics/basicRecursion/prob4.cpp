#include <iostream>

int Sum(int n){
    if (n == 0){
        return 0;
    }
    return n + Sum (n-1);
}
    

int main(){
    int n;
    std::cout<<"Input your number: ";
    std::cin>>n;
    std::cout<< Sum(n);

}