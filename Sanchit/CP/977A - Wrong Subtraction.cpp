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
int number = 0;
int steps = 0;
cin >> number >> steps;
string val = to_string (number);
for (int i=0; i<steps;i++){
    if (val[val.length()-1]=='0'){
        number = stoi (val);
        number /= 10;
        val = to_string (number);
    }
    else {
        number = stoi (val);
        number = number -1;
        val = to_string (number);
    }
}
cout << number << endl;
return 0;
}
