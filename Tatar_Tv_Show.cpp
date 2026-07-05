#include <iostream>
using namespace std;

string checkifZero(string s, int k){
    for(int i = 0; i < s.length(); i+=k) {
        if(s[i] == '0'){
            s[i] = '1';
        }else{
            s[i] = '0';
        }
    }
}

int main() {
    int t;
    cin >> t;
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
        if(s.length() > n){
            cout << "Enter string of size n" << endl;
            return 1;
        }

    
    return 0;
}