#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int friends, drinks, ml, limes, slices, salt, total_ml, total_slices, np, nl;
    cin >> friends >> drinks >> ml >> limes >> slices >> salt >> nl >> np;

    total_ml = drinks * ml;
    total_slices = limes * slices;

    int TFD = total_ml / nl;
    int TFS = salt / np;
    int TFL = total_slices;

    int max = min({TFD, TFS, TFL}) / friends;

    cout << max << endl;
    

    
    return 0;
}