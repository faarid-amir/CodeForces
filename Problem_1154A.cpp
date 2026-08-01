#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   vector<int> arr(4, 0);
   for( int i = 0; i < 4; i++) {
        cin  >> arr[i];
   }
   int max = arr[0];
   for(int i = 0; i< 4; i++) {
    if( arr[i] > max) {
        max = arr[i];
    }

   }

   sort(arr.begin(), arr.end());

   arr.pop_back();
   int a = arr[0];
   int b = arr[1];
   int c = arr[2];


   if( a == b && b == c && c == a) {
    cout << a / 2 << " " << b / 2 << " " << c / 2 << endl;
    return 0;
   }

   a = max - a;
   b = max - b;
   c = max - c;

   cout << a << " " << b << " " << c << endl;

    
   
}