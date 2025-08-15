class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int st = 0, end = n - 1;
        char result = letters[0];  // default in case target >= all letters
        
        while(st <= end){
            int mid = st + (end - st) / 2;
            
            if(letters[mid] > target){
                result = letters[mid]; // possible answer
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        
        return result;
    }
};
