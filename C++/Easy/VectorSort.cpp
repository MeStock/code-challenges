#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10
*/

int main() {
    int number;
    int length;
    vector<int> numbers;
    cin >> length;
    while(cin >> number) {
        numbers.push_back(number);
    }
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < length; i++){
        cout << numbers.at(i) << " ";
    }
    return 0;
}