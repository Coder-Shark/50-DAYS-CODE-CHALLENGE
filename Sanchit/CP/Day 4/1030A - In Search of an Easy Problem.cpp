#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
//helloworld
int main()
{
    int number_of_values = 0;
    cin >> number_of_values;
    vector <int> values;
    for (int i=0; i<number_of_values;i++){
        int value = 0;
        cin >> value;
        values.push_back (value);
    }
    int countA = count(values.begin(), values.end(), 1);
    int countB = count(values.begin(), values.end(), 0);
    if (countA >= 1){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }

    return 0;
}
