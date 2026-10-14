class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;

        long long area = 0;

        while(left < right){
            long long breadth = min(height[left] , height[right]);
            long long length = right - left;

            area = max(area , breadth*length);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }

        return area;
        
    }
};