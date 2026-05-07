class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2,0);
        unordered_map<int,int> um;

        for(int i=0;i<n;i++){
            int num = target - nums[i];

            if(um.find(num) != um.end()){
                ans[0] = um[num];
                ans[1] = i;
            }

            um[nums[i]] = i;
        }

        return ans;
    }
};
