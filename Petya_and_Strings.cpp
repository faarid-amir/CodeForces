#include <iostream>
#include <string>
using namespace std;

// int main() {
//     string a;
//     string b;

//     cin >> a;
//     cin >> b;
    
//     for(int i = 0; i < a.length(); i++){ 
//         if(a[i] > b[i] ){
//             b[i] = b[i] + 32;
//         }
//         else if( b[i] > a[i]) {
//             a[i] = a[i] - 32;
//         }else if (a[i] == b[i]){                                    // The program has a logical issue:
//                                                                                 /*Dry run with a = "absAbz" and b = "abcAbd" (expected: compare case-insensitively)
//                                                                                             i = 0: a[0] = 'a', b[0] = 'a' → equal, continue

//                                                                                             i = 1: a[1] = 'b', b[1] = 'b' → equal, continue

//                                                                                             i = 2: a[2] = 's', b[2] = 'c' → a[i] > b[i] so b[2] = 'c' + 32 = 99 + 32 = 131 💥
//                                                                                             131 is not a valid letter! Your comparison after the loop will now be completely wrong.*/
//             continue;
//         }
//     }
//       if(a > b){
//         cout << 1 << endl;
//       }else if(a == b){
//         cout << 0 << endl;
//       }else{
//         cout << -1 << endl;
//       }

//     return 0;
// }

int main(){ 
    string a;
    string b;
    cin  >> a;
    cin >> b ;

    for ( int i = 0; i< a.length(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if(a > b){
         cout << 1 << endl;
    }else if(a == b){
         cout << 0 << endl;
      }else{
        cout << -1 << endl;
     }
     return 0;
}