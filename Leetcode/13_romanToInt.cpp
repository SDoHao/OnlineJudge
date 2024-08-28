class Solution {
private:
    unordered_map<char,int> luomab = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D', 500},
        {'M', 1000}
    };
    int result = 0;
public:
    int romanToInt(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(luomab[s[i]] < luomab[s[i+1]])
                result -= luomab[s[i]];
            else
            {
                result += luomab[s[i]];
            }
        }
        return result;
    }
};