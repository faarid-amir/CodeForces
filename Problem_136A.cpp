#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *s = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int *ans = new int[n];

    int idx = 0;
    int newidx = 0;
    int val = 0;

    for (int i = 0; i < n; i++)
    {
      idx = s[i] - 1;
      ans[idx] = i + 1;
      idx = 0;
      
       
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    delete[] s;
    delete[] ans;
    return 0;
}