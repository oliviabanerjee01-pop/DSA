#include <iostream>
int main(){
    int n;
    std::cout<<"Size of array: ";
    std::cin>>n;
    int nums [n];
    std::cout<<"array: ";
    for(int i=0;i<n;i++){
        std::cin>>nums[i];
        
    }
    int largest = nums[0];
    for(int i = 1; i < n; i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }

    std::cout << "Largest number: " << largest;
    return 0;

}