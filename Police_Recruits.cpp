#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int officers = 0;
    int untreated = 0;

    for ( int i = 0; i < v.size(); i++) {
        if(v[i] == -1) {
            if(officers > 0){
                officers--;
            }else{
                untreated++;
            }
        }else{
            officers += v[i];
        }
    }

    cout << untreated << endl;
    return 0;
}