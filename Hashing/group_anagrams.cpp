//https://leetcode.com/explore/learn/card/hash-table/185/hash_table_design_the_key/1124/
//https://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string> > x;
        int m;
        vector<int> arr;
        arr.resize(26,0);
        vector<string> str; 
        for(int i=0;i<strs.size();i++)
        {
            string word=strs[i];
            sort(word.begin(),word.end());
            x[word].push_back(strs[i]);
        }
        vector<vector<string> > ans;
        for(auto i:x)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
