class Solution {
public:
    string finalString(string s) {
        string temp="";
        for(char ch:s){
            if(ch=='i'){
                reverse(temp.begin(),temp.end());
            }
            else{
                temp.push_back(ch);
            }
        }
        return temp;
     

    }
    
};