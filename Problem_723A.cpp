#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[3] = {0};
    for (int i = 0; i < 3; i++ ){
        cin >> arr[i];

    }
    sort ( arr, arr + 3);
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    cout << a << " " << b << " " << c << endl;

    // int count = 0;
    // count += ( b - a) + ( c - b);
    // cout << count << endl;
    
    return 0;
}