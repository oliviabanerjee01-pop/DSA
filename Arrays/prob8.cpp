#include <iostream>
int main(){
    int n;
    std::cout<<"Size of array: ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter array elements: ";
    for (int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int num;
    std::cout<<"number u wanna find: ";
    std::cin>> num;
    for (int i=0;i<n;i++){
        if (arr[i]==num){
            std::cout<<i;
        }
    }
    return 0;
}