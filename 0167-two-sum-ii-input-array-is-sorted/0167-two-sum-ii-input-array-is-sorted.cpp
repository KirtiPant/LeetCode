class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        int left=0,right=n-1;
        while(left<right){
            int sum=num[left]+num[right];
            if(sum == target){
                return {left+1 , right+1};
            }
            else if(sum < target){
                left++;
            } else{
                right --;
            }    
            }
            return{};
    }
};