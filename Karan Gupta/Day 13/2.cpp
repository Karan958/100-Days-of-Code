class Solution {
private:
    bool isPalindrome(string k){
        string temp=k;
        reverse(temp.begin(),temp.end());
        if(temp.compare(k)==0)
            return true;
        else
            return false;
    }
    void findPalindrome(vector<vector<string>> &ans, vector<string> temp, string s){
        if(s.size()==0)
            ans.push_back(temp);
        for(int i=0;i<s.length();i++){
            string k=s.substr(0,i+1);
            if(isPalindrome(k)){
                temp.push_back(k);
                findPalindrome(ans,temp,s.substr(i+1));
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        findPalindrome(ans,temp,s);

        return ans;
    }
};
