class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
int high =n-1, mid=0,low=0;
while(mid<=high){
    if(nums[mid] == 0){
        swap(nums[low] , nums[mid]);
        mid++;
        low++;
    }
    else if(nums[mid] == 1){
        mid++;
    }
    else{
        swap(nums[high] , nums[mid]);
        high--;
    }
}
    }
};