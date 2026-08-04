#include <iostream>
#include <vector>
using namespace std;



int main() {
    int t;
    cin >> t;

    while( t-- ) {
    string s;
    cin >> s;

    if(s.length() == 2) {
        cout << s << endl;
        continue;
    }
    vector<char> v;
    for( int i = 1; i < s.length() - 1; i++ ){ 
        if( s[i] == s[i+1]) {
            v.push_back(s[i]);
            i++;
        }
    }

    string ans = "";
    for( int i = 0; i < v.size(); i++) {
        ans += v[i];
    }

    cout << s[0] << ans << s[s.length() - 1] << endl;
    
    
}
return 0;

}
