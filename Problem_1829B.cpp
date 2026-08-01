#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxlen = 0;
        int length = 0;

       

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                length++;
            }
            else
            {
                maxlen = max(maxlen, length);
                length = 0;
            }
        }
        cout << max(maxlen, length) << endl; // handle trailing zeros!
    }
    return 0;
}