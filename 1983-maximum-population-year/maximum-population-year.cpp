class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n = logs.size();
        
        int maxPopulation = 0;
        int ans = 0;

        for(int year = 1950 ; year <=2050; year++){
            int count = 0;
            
            for(int i = 0; i< n; i++){
              if(logs[i][0] <= year && logs[i][1] > year){
                count++;
               } 
            }
            if(count > maxPopulation){
              maxPopulation = count;
              ans = year;
            }

        }
       
       return ans;
        
    }
};