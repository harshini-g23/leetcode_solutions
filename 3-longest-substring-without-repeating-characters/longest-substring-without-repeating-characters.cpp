class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int>mpp;
        int ws=0;
        int l=0;
        int maxlen=0;
        int r=s.length()-1;
        for(int i=0;i<s.length();i++){
        if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>=l){
           l=mpp[s[i]]+1;
        }
        mpp[s[i]]=i;
        maxlen=max(maxlen,i-l+1);
        }
    return maxlen;
    }
};