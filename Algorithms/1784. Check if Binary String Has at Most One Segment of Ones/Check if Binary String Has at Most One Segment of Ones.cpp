class Solution {
public:
    bool checkOnesSegment(string s) {
        
    
    for(int i=0;i<s.size();i++){
          if(i == s.size()-1){
              return true;
          }
          if(s[i]=='0' && s[i+1] =='1'){
              return false;
          }      
    }
        
        return true;
    }
};