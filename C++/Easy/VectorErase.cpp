#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Input Format

The first line of the input contains an integer N.The next line contains N space separated integers(1-based index).The third line contains a single integer x,denoting the position of an element that should be removed from the vector.The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.

Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9
*/

int main() {
    int startLength, number, startRange, endRange;
    cin >> startLength;
    vector<int> numbers;
    for(int i = 0; i < startLength; i++){
        cin >> number;
        numbers.push_back(number);
    }
    cin >> number >> startRange >> endRange;
    numbers.erase(numbers.begin() + number - 1);
    numbers.erase(numbers.begin() + startRange - 1, numbers.begin() + endRange - 1);
    cout << numbers.size() << endl ;
    for(int j = 0; j < numbers.size(); j++){
        cout << numbers.at(j) << " ";
    }

    return 0;
}