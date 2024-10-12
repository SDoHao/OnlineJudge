#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string data;
    while(getline(cin, data)){
        reverse(data.begin(), data.end());
        cout << data << endl;
    }
    
    return 0;
}
