#include <iostream>
#include <algorithm>
#include <vector>
using namespace  std;

string checks(string s) {
    string target = "Timur";

    sort(s.begin(), s.end());
    sort(target.begin(), target.end());

    if(s == target) {
        return "YES";
    }else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    

    while(t != 0) {
        
    int n;
    cin >> n;

        string s;
    cin >> s;
        if(n != 5) {
            cout << "NO" << endl;
        }else{ 
            cout << checks(s) << endl;

        }
        t--;
    }


    return 0 ;
}