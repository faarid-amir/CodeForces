#include <iostream>
#include <vector>
using namespace std;


int main() {

    int n; 
    cin>> n; 
    vector< int > v(n, 0);
    for ( int i = 0 ; i < v.size(); i++) {
        cin >> v[i];
    }
    int left = 0;
    int right = n-1;
    bool turn = 1;
    int s = 0;
    int d = 0;
    while (left <= right) {
        if(turn){
            if(v[left] > v[right]){
                s += v[left];
                left++;
                turn = 0;
            }else {
                s += v[right];
                right--;
                turn = 0;
            }
            }else{
                if(v[left] > v[right]){
                    d += v[left];
                    left++;
                    turn = 1;
                }else{
                    d += v[right];
                    right--;
                    turn = 1;
                }
            }
  
    }
    cout << s << " " << d  << endl;

    return 0; 

}