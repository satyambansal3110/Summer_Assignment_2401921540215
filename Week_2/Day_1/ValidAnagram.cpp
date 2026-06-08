class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false ;
        int count=0;
        int n=s.size();
        unordered_map<char,int> cp;
        for(char c:s){
            cp[c]++;
        }
        for(char c:t){
            if(cp[c]>0){
                count++;
                cp[c]--;
            }
        }
        if(count==n) return true;
        return false;
        
    }
};
