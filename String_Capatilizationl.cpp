#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a  = s[0] ;

    if( a >= 97){
        s[0]  = s[0] - 32;
    }

    cout << s << endl;

    return 0;
}