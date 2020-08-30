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
    int children, fence_h = 0;
    cin >> children >> fence_h;
    vector <int> heights;
    int result = 0;
    for (int i=0; i<children; i++){
        int val = 0;
        cin >> val;
        heights.push_back(val);
    }
    for (int i=0; i<heights.size();i++){
        if (heights[i] > fence_h){
            result += 2;
        }
        else{
            result += 1;
        }
    }
    cout << result << endl;
    return 0;
}
