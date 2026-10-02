class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for(int i =0; i< size ; i++){
            
            if(flowerbed[i] == 0){

                bool leftempty = false;
                bool rightempty = false;

                if(i == 0 || flowerbed[i-1] == 0){
                    leftempty = true;
                }

                if(i == size -1 || flowerbed[i + 1] == 0){
                    rightempty = true;
                }

                if(leftempty && rightempty){
                    flowerbed[i] = true;
                    n--;
                }
            }
        }

        return n<=0;
        
    }
};