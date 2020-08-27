#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
//helloworld
int main()
{
    int number_students;
    int time;
    cin >> number_students >> time;
    string sequence;
    char temp;
    cin >> sequence;
    for (int j=0; j<time;j++){
        for (int i=0; i<number_students-1;i++){
            if (sequence[i]=='B' && sequence[i+1]=='G'){
                temp = sequence[i];
                sequence[i] = sequence[i+1];
                sequence[i+1] = temp;
                i = i+1;
            }
        }
        //cout << sequence << endl;
    }
    cout << sequence << endl;
    return 0;
}
