#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols, count = 0;
    cin >> rows >> cols;

    vector<vector<string>> v(rows, vector<string>(cols, "0"));

    for (int i =0;  i< rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> v[i][j];
        }
    }
   
    for (int i = 0; i < rows; i++) {
    bool allOnes = true;  // assume row is all 1s
    
    for (int j = 0; j < cols; j++) {
        if (v[i][j] == "S") {
            allOnes = false;  // found an S, mark and break
            break;
        }
    }
    
    if (allOnes) {
        count += cols;  // entire row is 1s, add all columns
    }
}
    cout << count << endl;
    return 0;
}
    