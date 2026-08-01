#include <iostream>
using namespace std;


int main() {
    int n; cin >> n;

    int *arr = new int[n];

    int *ptr = new int(50);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n" ;


    cout << "The value of at ptr is " << *(ptr) << endl;

    delete[] arr;
    delete ptr;


    
}