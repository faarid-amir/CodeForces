#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        cin >> c;

        string s = "codeforces";
        bool found = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}