class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i : nums){ // i as a index starting 0 m hoga
            ans=ans^i;//XOR use kiya h 
        }
        return ans;
    }
};