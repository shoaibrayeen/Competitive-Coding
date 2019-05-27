class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() -1;
        vector<int> res;
        while(nums[i] + nums[j] != target) {
            if( nums[i] + nums[j] < target ) {
                i++;
            }
            if( nums[i] + nums[j] > target ) {
                j--;
            }
            if( nums[i] + nums[j] == target  ) {
                break;
            }
            if( i > j) {
                std::cout << "\nNo Such Two Numbers\n";
                return res;
            }
        }
        res.push_back(i);
        res.push_back(j);
        return res;
    }
};
