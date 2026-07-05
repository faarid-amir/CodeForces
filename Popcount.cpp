#include <iostream>
#include <bitset>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t != 0)
    {
        long long int n, k;
        cin >> n >> k;
        long long int count = 0;
        string binary = bitset<64>(n).to_string();

        if (k >= n)
        {
            cout << n << endl;
            t--;
            continue;
        }
        for (int i = 0; i < binary.length(); i++)
        {
            if (binary[i] == '1')
            {
                count++;
            }
        }
        int sum = count * k;
        cout << sum << endl;

        t--;
    }

    return 0;
}