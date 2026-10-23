class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set <int> mySet;
        for (int num : nums) {
            if (mySet.find(num) != mySet.end()) {
                return true;
            }
            mySet.insert(num);
        }    
        return false;
    }
};