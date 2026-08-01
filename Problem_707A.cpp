#include <iostream>
using namespace std;


int main() {
    int rows, cols;
    cin >> rows >> cols;

    char **pic = new char*[rows];
    for (int i = 0; i < rows; i++ ) {
        pic[i] = new char[cols];
    }

    for (int i = 0; i < rows; i++ ) {
        for ( int k = 0; k < cols; k++) {
            cin >> pic[i][k];
        }
    }

    bool isColoured = false;

    for(int i = 0; i < rows; i++ ) {
        for (int k = 0; k < cols; k++) {
            if ( pic[i][k] == 'C' || pic[i][k] == 'M' || pic[i][k] == 'Y' ) {
                isColoured = true;
                break;
            }
        }
    }

    if(isColoured) { cout << "#Color" << endl;}
    else { cout << "#Black&White" << endl;}

    for (int i = 0; i < rows; i++ ) {
        delete[] pic[i];
    }

    delete[] pic;

    return 0;
}