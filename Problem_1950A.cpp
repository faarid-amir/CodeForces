#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (b > a && b > c)
        {
            cout << "PEAK" << endl;
            continue;
        }
        else if (a < b && b < c)
        {
            cout << "STAIRS" << endl;
            continue;
        }
        else
        {
            cout << "NONE" << endl;
            continue;
        }
    }
}