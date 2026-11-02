class Solution {
public:

    int longestOnes(vector<int>& nums, int k) {
    int res = 0;
    int n = nums.size();
    int low = 0;
    int high = 0;
    int zeroes = 0;

    for(high = 0; high<n; high++){
        if(nums[high]==0){
            zeroes++;
        }

        while(zeroes>k){
            if(nums[low]==0){
                zeroes--;
            }
            low++;

        }
        int len = high-low+1;
        res = max(res,len);
    }    
    return res;
    }
};