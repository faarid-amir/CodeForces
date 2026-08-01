#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    char *game = new char[n];
    for(int i = 0; i < n; i++) {
        cin >> game[i];
    }

    int anton = 0;
    int danik = 0;

    for( int i = 0; i < n; i++) {
        if(game[i] == 'A' ) anton++;
        else if(game[i] == 'D') danik++;
    }


    if(anton > danik) { cout << "Anton" << endl;}
    else if(anton < danik) {cout << "Danik" << endl;}
    else { cout << "Friendship" << endl;}


    delete[] game;

    return 0;
}