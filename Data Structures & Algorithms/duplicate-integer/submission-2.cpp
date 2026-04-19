class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> us;

        for(auto it: nums){
            if(us.find(it) != us.end()){
                return true;
            }
            us.insert(it);
        }

        return false;
    }
};