#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = 0;

    while (x > 0) {
        if( x % 5 >= 0){
            x = x - 5;
            steps++;
        } else if( x % 4 == 0){
            x = x - 4;
            steps++;
        } else if (x % 3 == 0 ){
            x = x - 3;
            steps++;
        }else if(x % 2 == 0){
            x = x - 2;
            steps++;
        }else{
            x = x - 1;
            steps++;
        }
    }

    cout << steps << endl;
    return 0;
}