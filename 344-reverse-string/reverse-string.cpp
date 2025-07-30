class Solution {
public:
    void reverseString(vector<char>& s) {
        vector <char> copy(s.size());
        int j=0;
        for(int i=s.size()-1;i>=0;i--){
           copy[j++]=s[i];
        }
        s=copy;
        
    }
};