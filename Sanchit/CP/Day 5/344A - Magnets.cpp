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
    int test_magents = 0;
    cin >> test_magents;
    vector <string> magnets;
    int countA = 0;
    int results = 0;
    for (int i=0; i<test_magents; i++){
        string val;
        cin >> val;
        magnets.push_back(val);
    }
    for (int i=0; i<magnets.size();i++){
        if (i != magnets.size()-1){
        if (magnets[i] != magnets[i+1]){
            countA += 1;
            //cout << countA << endl;
        }
        else{
            countA += 0;
            //cout << countA << endl;
        }
    }
    else{
        break;
    }
    }

    cout << countA + 1 << endl;
    return 0;
}
