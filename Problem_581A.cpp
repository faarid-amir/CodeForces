#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int days_fashion = 0;
    int days_casual = 0;

    if (a == b)
    {
        days_fashion = a;
        days_casual = 0;
        cout << days_fashion << " " << days_casual << endl;
        return 0;
    }

    if (a > b)
    {
        days_fashion = b;
        a = a - b;
        while (a > 1)
        {
            a -= 2;
            days_casual++;
        }
        cout << days_fashion << " " << days_casual << endl;
        return 0;
    }

    if (b > a)
    {
        days_fashion = a;
            b = b - a;
        while (b > 1)
        {
            b -= 2;
            days_casual++;
        }
        cout << days_fashion << " " << days_casual << endl;
        return 0;
    }

   
    return 0;
}