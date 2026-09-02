class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx=INT_MIN,maxi=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx) {
                mx=nums[i];
                maxi=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i==maxi) continue;
            if(mx<2*nums[i]){
                return -1;
            }
        }
        return maxi;
    }
    
};