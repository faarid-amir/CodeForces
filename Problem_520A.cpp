#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;

    char *pangram = new char[n];
    
    for (int i = 0; i < n; i++) {
        cin >> pangram[i];
        pangram[i] = tolower(pangram[i]);
    }
    int freq[26] = {0};

    for (int i = 0; i < n; i++ ) {
        freq[pangram[i] - 'a']++;
    }

    bool isPangram = true;
    for ( int i = 0; i < 26; i++ ) {
        if (freq[i] == 0) {
            isPangram = false;
            break;
        }
    }

    if(isPangram) {
        cout << "YES" << endl;
    } else { cout << "NO" << endl;}


    delete[] pangram;

    return 0;
}