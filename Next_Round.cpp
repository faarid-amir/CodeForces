#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n , k;
    cin >> n >> k;

    vector<int> v(n, 0);
    for (int i = 0; i< v.size(); i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if(v[i] > 0 && v[i] >= v[k-1]) {
            count++;
        }
    }

    cout << count << endl;



    return 0;
}