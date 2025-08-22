class Solution {
public:
int findfirst(vector<int>&nums,int target){
    int n=nums.size();
    int st=0,end=n-1;
    int index=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid] == target){
        index=mid;
        end=mid-1;//left m dudenge aur;
    }
        else if(nums[mid] < target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return index;
}
int findlast(vector<int>&nums,int target){
    int n=nums.size();
    int st=0,end=n-1;
    int index=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid] == target){
        index=mid;
        st=mid+1;//right m dudenge aur;
        }
        else if(nums[mid] < target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return index;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums,target);
        int last = findlast(nums,target);
        return {first,last};
    }
};