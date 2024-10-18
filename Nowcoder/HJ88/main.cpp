#include <iostream>
#include<vector>
#include <string>
#include <unordered_map>
using namespace std;

using unorderedMap = unordered_map<string, int>;
unorderedMap weight = {
    {"3", 3},
    {"4", 4},
    {"5", 5},
    {"6", 6},
    {"7", 7},
    {"8", 8},
    {"9", 9},
    {"10", 10},
    {"J", 11},
    {"Q", 12},
    {"K", 13},
    {"A", 14},
    {"2", 15},
    {"joker", 16},
    {"JOKER", 17}
};

int stringSplit(vector<string>& holder, string str) {
    int st = 0;
    int ed = str.find(' ');
    int count = 1;
    while (ed != -1) {
        string s = str.substr(st, ed - st);
        //str = str.substr(ed + 1);
        holder.emplace_back(s);
        st = ed + 1;
        ed = str.find(' ', st);
        count++;
    }
    if (st < str.length()) 
    {
        holder.emplace_back(str.substr(st)); // Ìí¼ÓÊ£Óà²¿·Ö
        count++;
    }
    return count;
}

int getScore(vector<string>& holder) {
    if (holder.size() == 2 && holder[0] == "joker" && holder[1] == "JOKER")
        return 9999;
    int totalScore = 0;
    int score = 0;
    string s = "";
    for (auto& str : holder) {
        score = weight[str];
        if (s == str)
            score *= 10;
        else
        {
            s = str;
        }
        totalScore += score;
    }
    return totalScore;
}

void PrintCards(vector<string>& holder) {
    for (auto& str : holder)
        cout << str << " ";
}

int main() {
    string line;
    vector<string> holder1;
    vector<string> holder2;
    getline(cin, line);
    int pos = line.find('-');
    string str1 = line.substr(0, pos);
    string str2 = line.substr(pos + 1);
    int size1 = stringSplit(holder1, str1);
    int size2 = stringSplit(holder2, str2);
    if (size1 != size2 && (str1 != "joker JOKER" && str2 != "joker JOKER")
        && ((size1 <= 3 && holder2[0] != holder2[1]) || (size2 <= 3 && holder1[0] != holder1[1])))
    {
        cout << "ERROR";
    }
    else
    {
        if (getScore(holder1) > getScore(holder2))
            PrintCards(holder1);
        else
            PrintCards(holder2);
    }
    return 0;
}