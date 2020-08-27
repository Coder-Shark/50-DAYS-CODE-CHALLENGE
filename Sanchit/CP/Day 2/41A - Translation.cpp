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
    string word, new_word;
    cin >> word;
    string second_word;
    cin >> second_word;
    for (int i=(word.length()-1); i>=0;i--){
       new_word += word[i];

    }
    if (new_word == second_word){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}
