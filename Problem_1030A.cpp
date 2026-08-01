#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >>n;

    vector<int> people(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> people[i];
    }
    bool isEasy = true;

    for ( int i = 0; i < n; i++) {
       if( people[i] == 1) {
        isEasy = false;
       }
    
    }

    if(isEasy) {
        cout << "EASY" << endl;
    }else{ cout << "HARD" << endl;}

    return 0;
}
       