#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Number_of_books, minutes;
    cin >> Number_of_books >> minutes;

    vector<int> v(Number_of_books, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int countofbooks = 0;
    int k = 0;
    int sum = 0;

    for (int j = 0; j < v.size(); j++)
    {
        sum += v[j];
        if(sum <= minutes) { countofbooks++;}
        else{ 
            sum = sum - v[k]; // Remove the first book from the sum;
            k++;
        }
    } 
       

    cout << countofbooks << endl;

    return 0;
}

