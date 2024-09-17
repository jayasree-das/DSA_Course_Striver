class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        string str = s1 + " " + s2;
        stringstream s(str);
        string word;
        while(s >> word){
            m[word]++;
        }
        vector<string>ans;
        for(auto x:m){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};