class Solution {
public:
    bool isPalindrome(string s) {
       string f="";
       for(char c :s){
        if(isalnum(c)){
            f+=tolower(c);
        }
       }
       string rev=f;
       reverse(rev.begin(),rev.end());
       return f==rev;
    }
};
