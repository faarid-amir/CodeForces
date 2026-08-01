#include <iostream>
using namespace std;


int main() {

   int nums[4] = {0};
   for(int i = 0; i < 4; i++){
        cin >> nums[i];
   }

    string s;
    cin >> s;
    int cal = 0;

    for(int i = 0; i < s.length(); i++){
        cal += nums[(s[i] - '0') - 1];
    }
    cout << cal << endl;
}