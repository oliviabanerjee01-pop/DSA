#include <algorithm>
#include <iostream>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        for(int x=0; x<nums.size(); x++){
            if(nums[x]==0){
                for(int y=x+1; y<nums.size(); y++){
                    if(nums[y]!=0){
                        swap(nums[x],nums[y]);
                    break;}
                }
            }
        }
        
        
    }
};