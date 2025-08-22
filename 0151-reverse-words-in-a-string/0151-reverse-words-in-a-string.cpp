class Solution {
public:
    string reverseWords(string str) {
        int n=str.length();
        string ans= "";
        reverse(str.begin(),str.end());//poori string ko reverse kr diya
        for(int i=0;i<n;i++){
            string word= "";
            while(i<n && str[i] != ' '){ //spaces aane tk string ko reverse kiya
                word +=str[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length() > 0){ // ye shrif isliye h agr string nahi hui to spaces aa jaenge
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};