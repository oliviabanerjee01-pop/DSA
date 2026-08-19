class Solution {
public:
    int singleNumber(vector<int>& nums) {
      for(int i = 0; i < nums.size(); i++) {

            bool found = false;

            for(int y = 0; y < nums.size(); y++) {

                if(y != i && nums[y] == nums[i]) {
                    found = true;
                    break;
                }
            }

            if(found == false) {
                return nums[i];
            }
        }

        return -1;  
    }
};