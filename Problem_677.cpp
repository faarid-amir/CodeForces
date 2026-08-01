#include <iostream>
using namespace std;


int main() {
    int n, height;
    cin >> n >> height;

    int width = 0;

    int *friends = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> friends[i];
    }
    for(int i = 0; i < n; i++) {
        if(friends[i] <= height) {
            width += 1;
        }else if(friends[i] > height){ 
            width += 2;
        }
    }

    cout << width << endl;
    delete[] friends;
}