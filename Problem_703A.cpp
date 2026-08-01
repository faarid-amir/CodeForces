#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> Mishka(n, 0);
    vector<int> Chris(n, 0);

    for(int i = 0; i < n; i++){
        cin >> Mishka[i] >> Chris[i];
    }

    int ScoreM = 0;
    int ScoreC = 0;
    for(int i = 0; i < n; i++){
        if(Mishka[i] == Chris[i]){
            continue;
        }
        if ( Mishka[i] > Chris[i]){
            ScoreM++;
        }
        if( Mishka[i] < Chris[i] ) {
            ScoreC++;
        }
    }

    if(ScoreM > ScoreC) { cout << "Mishka" << endl; }
    else if (ScoreM < ScoreC) { cout << "Chris" << endl; }
    else { cout << "Friendship is magic!^^" << endl; }


    return 0;
}