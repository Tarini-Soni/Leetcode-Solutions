class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n= dimensions.size();
        int m = dimensions[0].size();

        int maxDiagonal = 0;
        int maxArea = 0;


        for(int i =0; i<n; i++){
                int length = dimensions[i][0];
                int breadth = dimensions[i][1];

                int diagonal = length*length + breadth*breadth;
                int area = length*breadth;

                if(diagonal > maxDiagonal){
                    maxDiagonal = diagonal;
                    maxArea = area;
                }else if(diagonal == maxDiagonal){
                    maxArea = max(area, maxArea);
                }   
        }

        return maxArea;

        
        
    }
};