class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i : nums){
            int fre = 0;
            for(int el : nums){
                if(el == i){
                    fre ++;
                }
            }
            if(fre>n/2){
                return i;
            }
        }
        return -1;
    }
};