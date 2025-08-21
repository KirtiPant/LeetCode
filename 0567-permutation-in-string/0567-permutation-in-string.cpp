class Solution {
public:
bool isfreq(int fre1[],int fre2[]){
    for(int i=0;i<26;i++){
        if(fre1[i]!=fre2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string str1, string str2) {
        int freq[26]={0};
        for(int i=0;i<str1.length();i++){
            freq[str1[i]-'a']++;
        }
        
        int windowSize=str1.length();
        for(int i=0;i<str2.length();i++){
            int windowfreq[26]={0};
            int windowIndx=0,indx=i;
            while(windowIndx < windowSize && indx < str2.length()){
                windowfreq[str2[indx]-'a']++;
                windowIndx++;
                indx++;
            }
            if(isfreq(freq,windowfreq)){
                return true;
            }
        }
        return false;
    }
};