class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        //find pivort
        int pivort = -1, n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                //pivort hamesha apne next element se chota hota h!
                pivort = i;
                break;
            }
        }
        if(pivort == -1){
            reverse(arr.begin(),arr.end()); //inplace change
            return;
        }
    //step 2: to find the maximum element:
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[pivort]){
            swap(arr[i],arr[pivort]);
            break;
        }
    }
    //step 3: reverse(pivort+1 to n-)
    //reverse(arr.begin()+pivort+1,arr.end())
    int i=pivort+1, j=n-1;

    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
    }
};