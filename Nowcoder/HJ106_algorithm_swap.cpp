#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string data;
    int left,right = 0;
    while(getline(cin,data))
    {
        left = 0;
        right = data.size()-1;
        while(left < right)
        {
            swap(data[left++],data[right--]);
        }
        cout << data << endl;
    }
    // while(getline(cin, data)){
    //     reverse(data.begin(), data.end());
    //     cout << data << endl;
    // }
    
    return 0;
}
