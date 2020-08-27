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
    long long int number;
    cin >> number;
    //int count;
    string numbr = to_string (number);
    int count4 = count (numbr.begin(), numbr.end(), '4');
    int count7 = count (numbr.begin(), numbr.end(), '7');
    //cout << count4 << " " << count7 << " " << count4+count7 << endl;
    if ((count4 + count7) == 4 || (count4 + count7) == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
