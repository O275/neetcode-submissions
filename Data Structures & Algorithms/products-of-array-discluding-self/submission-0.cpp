class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);

        int l_prod = 1;
        for (int i = 0; i < n; ++i) {
            output[i] = l_prod;
            l_prod *= nums[i];
        }

        int r_prod = 1;
        for (int i = n - 1; i >= 0; --i) {
            output[i] *= r_prod;
            r_prod *= nums[i];
        }

    return output;

    }

};