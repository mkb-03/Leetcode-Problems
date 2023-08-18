class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string result = "";

        for(int i = 0; i < strs[0].length() ; i++)
        {
            if(strs[0][i] != strs[strs.size()-1][i] )
            {
                break;
            }
            
            result += strs[0][i];
        }

        return result;
    }
};