#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
//helloworld
int main()
{
    int bob, limak = 0;
    cin >> limak >> bob;
    // limak <= bob
    int year = 0;
    while (limak <= bob){
        limak *= 3;
        bob *= 2;
        year += 1;
    }
    cout << year << endl;
return 0;
}
