class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    std::unordered_set<int> unique(nums.begin(), nums.end());
    return unique.size() != nums.size();
    }
};