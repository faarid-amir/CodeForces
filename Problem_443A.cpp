#include <iostream>
#include <set>
using namespace std;


int main() {

    string s;
    getline(cin, s);

    set<char> letters;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ') {
            letters.insert(s[i]);
        }

    }

    int count = letters.size();
    cout << count << endl;
}