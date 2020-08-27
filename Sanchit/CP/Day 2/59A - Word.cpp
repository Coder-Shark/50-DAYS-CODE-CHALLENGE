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
    int count=0;
    string word;
    cin >> word;
    for (int i=0; i<word.length();i++){
        if (!islower(word[i])){
            count = count + 1;
        }
    }
    //cout << count <<endl;
    if (count > (word.length()/2)){
        transform (word.begin(), word.end(), word.begin(), ::toupper);
    }
    else{
        transform (word.begin(), word.end(), word.begin(), ::tolower);
    }
    cout << word << endl;
    return 0;
}
