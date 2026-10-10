class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i =0; i<n ; i++){
            set<int> prefix;
            set<int> suffix;

            for(int j =0; j<= i; j++){
                prefix.insert(nums[j]);
            }

            for(int j = i+1; j<n; j++){
                suffix.insert(nums[j]);
            }

            ans[i] = prefix.size() - suffix.size();
        }
        
        return ans;
    }
};