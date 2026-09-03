class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto& i:s){
            if(isalnum(i)) res+=tolower(i);         
        }
        int L=0,R=res.size()-1;
    
        while(L<R){
            if(res[L]!=res[R]) return false;
            L++;
            R--;
        }
        return true;
    }
};