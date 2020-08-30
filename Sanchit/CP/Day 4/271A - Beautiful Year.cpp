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
    int number = 0;
    cin >> number;
    int countA = 0;
    bool flag = true;
    number += 1;
    string value = to_string (number);
     while (flag == true){
       countA = 0;
       for (int i=0; i<value.length();i++){
        for (int j=i+1; j<value.length();j++){
            if (value[i] == value[j]){
                countA += 1;
                number += 1;
                //cout << countA << endl;
                value = to_string (number);
                flag = true;
            }
            if (countA > 0){
                continue;
            }
            if (countA == 0){
                //cout << number << endl;
                flag = false;
            }
        }
       }
     }
     cout << number << endl;
    return 0;
}
