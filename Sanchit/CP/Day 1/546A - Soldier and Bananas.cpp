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
    int initial_cost, dollars, bananas = 0;
    cin >> initial_cost >> dollars >> bananas;
    int sum =0;
    for (int i=1; i<=bananas; i++){
        sum += i*initial_cost;
    }
    if ((sum-dollars) < 0){
        cout << 0 << endl;
    }
    else{
            cout << sum-dollars << endl;
    }

return 0;
}
