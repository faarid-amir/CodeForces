#include <iostream>
using namespace std;

bool isPrime(int m){

    if(m < 2) return false;

    for(int i = 2; i * i <= m; i++) {
        if(m %  i == 0 ) return false;
    }
    return true;
}
int main(){

    int n, m;
    cin >> n >> m;
    
    if(isPrime(m)) {
        bool isNextPrime = true;
        m--;
        while( m > n ) {
            if(isPrime(m)) {
                isNextPrime = false;
                break;
            }
            m--;
        }
        if(isNextPrime){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }else{ 
        cout << "NO" << endl;
    }

}