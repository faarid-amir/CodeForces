#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;

    while(t--) {
        
    int a ,b,c;
    cin >> a >> b >> c;

    bool Eq1 = false;
    bool Eq2 = false;

    if( a + b == c ) Eq1 = true;
    if( a - b == c ) Eq2 = true;

    if( Eq1) cout << "+" << endl;
    else cout << "-" << endl;
    }
    return 0;
}