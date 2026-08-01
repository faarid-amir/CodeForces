#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int *people = new int[n];
    int *max = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> people[i];
        cin >> max[i];
    }

    int count = 0;
    
    for ( int i = 0; i < n; i++) {
        int diff = max[i] - people[i];
        if( diff >= 2) {count++;}
           
            
    }
    
    cout << count << endl;
    delete[] people;
    delete[] max;

    return 0;
}