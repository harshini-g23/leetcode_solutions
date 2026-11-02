#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss>> word){
            words.push_back(word);
        }
        if(pattern.length()!=words.size()){
            return false;
        }
        unordered_map<char,int>char_map;
         unordered_map<string,int>word_map;
         for(int i=0;i<pattern.length();++i){
            char c=pattern[i];
            string w=words[i];
            if(char_map[c] != word_map[w]){
                return false;
            }
            char_map[c]=i+1;
            word_map[w]=i+1;
         }
         return true;
    }
};