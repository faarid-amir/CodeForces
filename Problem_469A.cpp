#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> freq(n, 0);

    int p;
    cin >> p;

    int *LX = new int[p];
    for (int i = 0; i < p; i++)
    {
        cin >> LX[i];
    }

    int q;
    cin >> q;
    int *LY = new int[q];
    for (int i = 0; i < q; i++)
    {
        cin >> LY[i];
    }

    bool CanComplete = true;

    for (int i = 0; i < p; i++)
    {
        freq[LX[i] - 1]++;
    }

    for (int i = 0; i < q; i++)
    {
        freq[LY[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[i] == 0)
        {
            CanComplete = false;
            break;
        }
    }

    if (CanComplete)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard! " << endl;
    }

   

 
    delete[] LX;
    delete[] LY;

    return 0;
}