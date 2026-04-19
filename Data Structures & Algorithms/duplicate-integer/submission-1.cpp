class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> um;

        for(auto it: nums){
            um[it]++;
        }

        for(auto it: um){
            if(it.second > 1){
                return true;
            }
        }

        return false;
    }
};