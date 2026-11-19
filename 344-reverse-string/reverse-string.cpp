class Solution {
public:
    void reverse(vector<char>& s, int left, int right) {
        int n = s.size();

        if(left >= right){
            return;
        }


        //swapping characters
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        //recursive call
        reverse(s, left +1, right-1);  
    }

    void reverseString(vector<char>& s){
        int n = s.size();
        reverse(s, 0, n-1);
    }
};