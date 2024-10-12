#include <iostream>
using namespace std;

int main() 
{
    int a,n;
    cin >> a;
    n = 0;
    while(a > 0)
    {
        if(a % 2!=0)
            n++;
        a = a / 2;
    }
    cout << n;
}
