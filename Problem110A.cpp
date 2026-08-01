#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int temp = n;
    long long int count = 0;
    long long int lucky = 0;

    

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            lucky++;
        }
        n = n / 10;
    }
    int temp2 = lucky;
    bool isLucky = true;

    if( lucky == 0) {
        isLucky = false;
    }
    while (temp2 != 0)
    {
        if (temp2 % 10 != 4 && temp2 % 10 != 7)
        {
            isLucky = false;
            break;
        }
        temp2 = temp2 / 10;
    }

    if (isLucky)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}