#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
You are given N integers in sorted order. Also, you are given Q queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.

Lower bound is a function that can be used with a sorted vector. Learn how to use lower bound to solve this problem by

Sample Input

 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Sample Output

 Yes 1
 No 5
 Yes 6
 Yes 8
*/
int main() {
    int length, number, queries, value;
    cin >> length;
    vector<int> numbers;
    for(int i = 0; i < length; i++){
        cin >> number;
        numbers.push_back(number);
    }
    cin >> queries;
    for(int j = 0; j < queries; j++){
        cin >> value;
        vector<int>::iterator low = lower_bound(numbers.begin(), numbers.end(), value);
        if(numbers[low - numbers.begin()] == value){
            cout << "Yes " << (low - numbers.begin()+1) << endl;
        }
        else{
            cout << "No " << (low - numbers.begin()+1) << endl;
        }
    }
    return 0;
}