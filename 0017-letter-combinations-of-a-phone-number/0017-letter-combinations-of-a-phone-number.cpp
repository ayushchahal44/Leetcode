class Solution {
public:
    void solve(string digits,vector<string> &ans,int index,string comb,const unordered_map<char,string> &digittoletter){
        if(index==digits.size()){
            ans.push_back(comb);
            return;
        }
        string letters = digittoletter.at(digits[index]);
        for(char letter: letters){
            solve(digits,ans,index+1,comb+letter,digittoletter);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        unordered_map<char,string> digittoletter = {
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        solve(digits,ans,0,"",digittoletter);
        return ans;
    }
};