class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());          // well this is not proper way :)
        int L=0;
        int R=s.size()-1;
        while(L<R){
            swap(s[L],s[R]);
            L++;
            R--;
        }
    }
};