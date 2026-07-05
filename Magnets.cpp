#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i =0; i < v.size(); i++) {
        cin >> v[i];
    }
    int group = 1;
    for (int i = 0; i < v.size() -1; i++ ) {
        if(v[i] != v[i+1]) {
            group++;
        }
    }

    cout << group << endl;
   


    return 0;
}