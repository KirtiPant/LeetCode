class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0; // koi element nahi h bas 0 h uske andr
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(freq == 0){
                ans=nums[i];//ye answer ho gaya agar freq 0 h to
            }
            if(ans == nums[i]){ // angr jo answer ke andr h nums[i] uske equal koi aur variable bhi h to batao
            freq++;
            }
            else{
                freq--;//-- isliye kiya kyuki har baar value ko reset ni krna padega simply 0 hi jaegi vapis.
            }
        }
        return ans;
    }
};