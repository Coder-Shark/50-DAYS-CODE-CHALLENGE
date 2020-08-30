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
    long long int number = 0;
    cin >> number;
    long long int result = 0;
    if (number %2 ==0){
        result = number/2;
    }
    else{
        result = ((-1)*(number+1))/2;
    }
    cout << result << endl;
    return 0;
}
