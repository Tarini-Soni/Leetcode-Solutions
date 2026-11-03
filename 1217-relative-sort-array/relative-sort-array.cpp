class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> remaining;

        for(int i = 0; i < arr2.size(); i++)
        {
            for(int j = 0; j < arr1.size(); j++)
            {
                if(arr1[j] == arr2[i])
                {
                    ans.push_back(arr1[j]);
                }
            }
        }

        for(int i = 0; i < arr1.size(); i++)
        {
            bool found = false;

            for(int j = 0; j < arr2.size(); j++)
            {
                if(arr1[i] == arr2[j])
                {
                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                remaining.push_back(arr1[i]);
            }
        }

        sort(remaining.begin(), remaining.end());

        for(int i = 0; i < remaining.size(); i++)
        {
            ans.push_back(remaining[i]);
        }

        return ans;
    }
};