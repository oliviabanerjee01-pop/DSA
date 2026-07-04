class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int sum = 0;
        int uniqueSum = 0;
        for (int x : nums){
            sum = sum + x;

            if(st.find(x) == st.end()) {
                st.insert(x);
                uniqueSum += x;
            }
        }
         return 2 * uniqueSum - sum;

            
        
    }
};