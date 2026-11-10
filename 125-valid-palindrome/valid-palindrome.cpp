// class Solution {
// public:
//     bool isPalindrome(string s) {
//        string f="";
//        for(char c :s){
//         if(isalnum(c)){
//             f+=tolower(c);
//         }
//        }
//        string rev=f;
//        reverse(rev.begin(),rev.end());
//        return f==rev;
//     }
// };


class Solution{
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            while(l<r and !isalnum(s[l])){
                l++;
            }
             while(l<r and !isalnum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r]))
                return false;
            l++;
            r--;
        }
        return true;
    }
};