class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0; 
        long long n = 0; 
        for (int i : nums) {
            if (i == 0) {
                n++;         
                ans += n;      
            } else {
                n = 0; 
            }
        }
        return ans;
    }
};