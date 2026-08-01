#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n + 1, " ");
    v[0] = "I hate ";
    v[n] = "it ";
    
    for(int i = 1; i < n; i++) {
        if(i % 2 == 0 ) {
           v[i] = "that I hate ";
        } else {
           
              v[i] = "that I love ";
        }
    }

    for(int i = 0; i <= n; i++) {
        cout << v[i];
    }
    

    return 0;
}