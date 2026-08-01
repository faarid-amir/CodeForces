#include <iostream>
using namespace std;

bool isLucky(string s) {
    bool isLucky = true;

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() / 2) {
            sum1 += (s[i] - '0');
        } else {
            sum2 += (s[i] - '0');
        }
    }

    if( sum1 != sum2 ) {
        isLucky = false;
    }
    return isLucky;
}     


int main() {
    int t;
    cin >> t;

    while( t != 0 ) {
        string s;
        cin >> s;
        cout << (isLucky(s) ? "YES" : "NO" ) << endl;

        t--;

}   
    return 0;
}