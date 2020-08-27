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
    int test_cases = 0;
    cin >> test_cases;
    vector <int> diff;
    int a,b =0;
    int countA = 0;
    for (int i=0; i<test_cases; i++){
        cin >> a >> b;
        diff.push_back(abs(a-b));
        if (abs(b - a)>=2){
            countA += 1;
        }
    }
    int count_down = 0;
    count_down = count (diff.begin(), diff.end(), abs(a-b));
    cout << countA << endl;
    return 0;
}
