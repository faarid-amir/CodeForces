#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *exit = new int[n];
    int *enter = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> exit[i] >> enter[i];
    }

    int max = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = enter[i] - exit[i] + result;
       
        if (result > max)
        {
            max = result;
        }
       
    }

    cout << max << endl;
    delete[] exit;
    delete[] enter;

    return 0;
}