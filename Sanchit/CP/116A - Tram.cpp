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
    vector <int> entering;
    vector <int> exiting;
    vector <int> capacity;
    int result = 0;
    int test_cases;
    cin >> test_cases;
    for (int i=0; i <test_cases; i++){
        int pass_enter, pass_exit =0;
        cin >> pass_exit >> pass_enter;
        entering.push_back(pass_enter);
        exiting.push_back(pass_exit);
    }
    for (int i=0; i<entering.size(); i++){
        result += entering[i];
        result = abs(result-exiting[i]);
        //cout << result << endl;
        capacity.push_back(result);
    }
    result =0;

    cout << *max_element(capacity.begin(), capacity.end());
return 0;
}
