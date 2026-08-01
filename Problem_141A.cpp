#include <iostream>
using namespace std;

int main()
{
    string host, guest, hg;
    cin >> host >> guest >> hg;

    int freq[26] = {0};
    for (char c : host)
    {
        freq[c - 'A']++;
    }
    for (char c : guest)
    {
        freq[c - 'A']++;
    }
    for (char c : hg)
    {
        freq[c - 'A']--;
    }
    bool CanBePermuted = true;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            CanBePermuted = false;
            break;
        }
    }

    if (CanBePermuted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}