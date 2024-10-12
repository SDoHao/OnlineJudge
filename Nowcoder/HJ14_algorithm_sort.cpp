#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int n;
    int i = 0;
    string s;
    vector<string> str;
    cin >> n;
    while(i < n)
    {
        cin >> s;
        str.push_back(s);
        i++;
    }
    sort(str.begin(),str.end());
    for(string s:str)
        cout << s << endl;
    return 0;
}
