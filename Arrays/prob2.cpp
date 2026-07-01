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
    int secondlargest = 1;
    for(int i = 1; i < n; i++){
        if(nums[i]>secondlargest && nums[i]!=largest){
            secondlargest=nums[i];
        }
        
    }
    std::cout<<"Second largest is: "<<secondlargest;
    return 0;

}