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
    int no_rounds = 0;
    cin >> no_rounds;
    string round_scores;
    cin >> round_scores;
    int countA = count (round_scores.begin(), round_scores.end(), 'A');
    int countD = count (round_scores.begin(), round_scores.end(), 'D');
    if (countA > countD){
        cout << "Anton" << endl;
    }
    if (countA == countD){
        cout << "Friendship" << endl;
    }
    if (countA < countD){
        cout << "Danik" << endl;
    }
    return 0;
}
