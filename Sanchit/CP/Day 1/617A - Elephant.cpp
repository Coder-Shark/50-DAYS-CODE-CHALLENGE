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
int place = 0;
int count = 0;
cin >> number;
vector <int> values {1,2,3,4,5};
for (int i=0; i<5; i++){
    if (number > 5){
       while (number > place){
        place+= 5;
        count += 1;
        //cout << place << endl;
        if ((number-place) == values[i] ){
            count += 1;
            //cout << count << endl;
            break;
        }
       }
       break;
    }
    else if (number<=5){
        if (number == values[i]){
            count = 1;
        }
    }
}
cout << count << endl;
return 0;
}
