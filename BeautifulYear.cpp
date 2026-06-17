#include <iostream>
#include <set>;
using namespace std;

int main() {
    int y;
    cin >> y;

    while(true){
        y++;
        int a = y / 1000;
        int b = (y/ 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;

        set<int> s = {a, b, c, d};
        if (s.size() == 4)
        {
            cout << y << endl;
            break;
        }
        
    }

    return 0;
}