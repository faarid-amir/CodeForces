#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k = 0;
    for(int i = 0; i < s.length(); i++) {
        
        s[k] = s[s.length() - 1 - i];
        k++;
    }
    

    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}