
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> ans;

        for(int i = 0; i < l.size(); i++) {
            
            vector<int> temp;

            // Extract the subarray
            for(int j = l[i]; j <= r[i]; j++) {
                temp.push_back(nums[j]);
            }

            // Sort the subarray
            sort(temp.begin(), temp.end());

            // Calculate the common difference
            int diff = temp[1] - temp[0];

            bool flag = true;

            // Check arithmetic sequence
            for(int j = 2; j < temp.size(); j++) {
                
                if(temp[j] - temp[j-1] != diff) {
                    flag = false;
                    break;
                }
            }

            ans.push_back(flag);
        }

        return ans;
    }
};
