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
    int n, p;
    cin >> n;
    vector<int> f(n+1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
}
