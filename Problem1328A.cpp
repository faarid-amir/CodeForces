#include <iostream>
using namespace std;

// int div(int a, int b) {
//     for(int i = 1; i <= a; i++) {
//         if( a % b == 0) {
//             return i;
            
//         }
//         a = a + 1;
//     }
// }


int main() {
    int t;
    cin >> t;

    int moves;

    while(t != 0){
        int a, b;
        cin >> a >> b;
      
    
        if( a % b == 0){ moves = 0;}
        else{ moves = b - (  a % b) ;}
       cout << moves << endl;
        t--;
    }

    return 0;
}