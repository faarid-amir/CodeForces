#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        int count = 0;
        int m = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0')
            {
                count++;
            }
        }
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            v.push_back(s[i] - '0');
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            v[i] = v[i] * m;
            m *= 10;
        }

        cout << count << endl;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != 0)
            {
                cout << v[i] << " ";
            }
        }
    }
    return 0;
}