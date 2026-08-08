class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> maps;
        map<char, int> mapt;

        for(auto it : s){
            maps[it]++;
        }

        for(auto it : t){
            mapt[it]++;
        }

        if(s.length() == t.length() && maps == mapt){
            return true;
        }

        else{
            return false;
        }
    }
};