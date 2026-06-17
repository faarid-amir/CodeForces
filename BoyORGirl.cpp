#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main() {
    string n;
    cin >> n;

    set<char> s;
    for (int i =0; i < n.length(); i++){
        s.insert(n[i]);
    }

    cout << s.size() << endl;

    if (s.size() % 2 == 0){cout << "CHAT WITH HER!" << endl; }
         else{cout << "IGNORE HIM!" << endl;}
  
    


    return 0;
}