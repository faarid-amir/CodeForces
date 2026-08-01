#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *drinks = new int[n];
    float Vol_fraction = 0.0;
    float sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        cin >> drinks[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += (drinks[i]) / 100.0;
    }

    Vol_fraction = (sum / n) * 100.0;
    cout << Vol_fraction << endl;

    delete[] drinks;

    return 0;
}