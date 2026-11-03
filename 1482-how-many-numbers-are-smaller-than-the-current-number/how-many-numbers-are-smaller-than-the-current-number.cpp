class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;

            for(int j = 0; j < arr.size(); j++)
            {
                if(arr[j] == nums[i])
                {
                    count = j;
                    break;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};