class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        int positives = 0;
        int negatives = 0;

        for(int i =0; i<n ; i++){
            if(nums[i] == 0){
                continue;
            }

            if(nums[i] > 0){
                positives++;
            }else{
                negatives++;
            }
        }

        return max(positives, negatives);
        
    }
};