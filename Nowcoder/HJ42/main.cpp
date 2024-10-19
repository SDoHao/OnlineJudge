#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void printBig(int n)
{
    switch (n)
    {
        case 1:cout << " thousand "; break;
        case 2:cout << " million "; break;
        case 3:cout << " billion "; break;
    }
}

void printTen(int n)
{
    switch (n)
    {
    case 0:cout << "ten"; break;
    case 1:cout << "eleven"; break;
    case 2:cout << "twelve"; break;
    case 3:cout << "thireen"; break;
    case 4:cout << "fourteen"; break;
    case 5:cout << "fifteen"; break;
    case 6:cout << "sixteen"; break;
    case 7:cout << "seventeen"; break;
    case 8:cout << "eighteen"; break;
    case 9:cout << "nineteen"; break;
    }
}

void printMid(int n)
{
    switch (n)
    {
    case 2:cout << "twenty"; break;
    case 3:cout << "thirty"; break;
    case 4:cout << "forty"; break;
    case 5:cout << "fifty"; break;
    case 6:cout << "sixty"; break;
    case 7:cout << "seventy"; break;
    case 8:cout << "eighty"; break;
    case 9:cout << "ninety"; break;
    }
}

void printNumber(int n)
{
    switch (n)
    {
    case 1:cout << "one"; break;
    case 2:cout << "two"; break;
    case 3:cout << "three"; break;
    case 4:cout << "four"; break;
    case 5:cout << "five"; break;
    case 6:cout << "six"; break;
    case 7:cout << "seven"; break;
    case 8:cout << "eight"; break;
    case 9:cout << "nine"; break;
    }
}

struct thrip
{
    int value[3] = { 0 };
};

int main()
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    int index = 0,n = str.size(),posMap = 0,posNum = 0;
    map<int, struct thrip*> number;
    thrip* pTp = new thrip;
    number[posMap] = pTp;
    if (n > 1)
    {
        while (index < n)
        {
            pTp->value[posNum] = str[index] - '0';
            index++;
            posNum++;
            if (posNum == 3)
            {
                posNum = 0;
                posMap++;
                pTp = new thrip;
                number[posMap] = pTp;
            }
        }

        for (int i = posMap; i >= 0; i--)
        {
            bool ishundred = false;
            bool isNumber = false;
            pTp = number[i];
            if (pTp->value[2] > 0)
            {
                ishundred = true;
                isNumber = true;
                printNumber(pTp->value[2]);
                cout << " hundred ";
            }
            if (pTp->value[1] > 0 || pTp->value[0] > 0)
            {
                if (ishundred)
                    cout << "and ";
                if (pTp->value[1] > 1)
                {
                    printMid(pTp->value[1]);
                    if (pTp->value[0] > 0)
                    {
                        cout << " ";
                        printNumber(pTp->value[0]);
                    }
                        
                }
                else if (pTp->value[1] == 1)
                {
                    printTen(pTp->value[0]);
                }
                else
                    printNumber(pTp->value[0]);
                isNumber = true;
            }
            if (i > 0 && isNumber)
            {
                printBig(i);
            }
        }

    }
    else
        cout << "zero";
    return 0;
}
