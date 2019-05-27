class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++)  { 
            int temp = target - nums[i]; 
            if (s.find(temp) != s.end()) {
                res.push_back(i);
                for(int j = 0; j < n; j++) {
                    if( temp == nums[j]) {
                        res.push_back(j);
                        break;
                    }
                }
            }
            s.insert(nums[i]); 
        } 
        int temp = res[0];
        res[0] = res[1];
        res[1] = temp;
        return res;
    }
};
