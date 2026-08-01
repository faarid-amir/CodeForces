#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *soldiers = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> soldiers[i];
    }

    int max = soldiers[0];
    int min = soldiers[0];

    int idx_max = 0;
    int idx_min = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < soldiers[i])
        {
            max = soldiers[i];
            idx_max = i;
        }
        if (min >= soldiers[i])
        {
            min = soldiers[i];
            idx_min = i;
        }
    }

    int moves_max = idx_max;
    int moves_min = (n - 1) - idx_min;

    count = moves_max + moves_min;
    if ( idx_max > idx_min) { 
        count--;
    }
    

    cout << count << endl;

    delete[] soldiers;

    return 0;
}