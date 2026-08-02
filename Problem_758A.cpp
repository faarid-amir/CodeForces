#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *citizens = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> citizens[i];
    }

    int max = citizens[0], count = 0;

    for (int i = 0; i < n; i++)
    {
        if (citizens[i] > max)
        {
            max = citizens[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (citizens[i] < max)
        {
            while (citizens[i] != max)
            {
                citizens[i]++;
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}