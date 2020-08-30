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
    string odd_initial = "I hate it";
    string even_initial = "I love it";
    string odd = "I hate that ";
    string even = "I love that ";
    string result;
    if (number == 1){
        cout << odd_initial << endl;
        return 0;
    }
    else if (number == 2){
        cout << odd + even_initial << endl;
        return 0;
    }
    for  (int i=1; i<=number; i++){
        if (i == number){
            if (i%2 == 1){
                result += odd_initial;
            }
            else{
                result += even_initial;
            }
        }
        else{
            if (i%2 == 0){
                result += even;
            }
            else{
                result += odd;
            }
        }
        }
    cout << result << endl;
    return 0;
}
