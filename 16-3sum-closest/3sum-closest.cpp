class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int diff = INT_MAX;
        int res = 0;

        for(int i = 0; i<n-2;i++){
            int left = i+1;
            int right = n-1;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                int d = abs(target-sum);

                if (d<diff){
                    diff = d;
                    res = sum;
                }

                if (sum == target){
                    return res;
                }
                else if (sum < target){
                    left++;
                }
                else{
                    right--;
                }

            }
        }
        return res;
    }
};