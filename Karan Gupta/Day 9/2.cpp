class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int i=0, sm_len=strs[0].size();
        for(auto str: strs){
            if(str.size()<sm_len) sm_len=str.size();
        }
        for(int i=0;i<sm_len;i++){
            bool common=true;
            char c=strs[0][i];
            for(auto wrd:strs ){
                if(wrd[i] != c){
                    common=false;
                    break;
                }
            }
            if(common) s.append(1,c);
            else break;
        }
        return s;

    }
};
