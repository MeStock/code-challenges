#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
  1: Add an element x to the set.
  2: Delete an element x from the set. (If the number  is not present in the set, then do nothing).
  3: If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

  The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. Each query consists of two integers x and y where y is the type of the query and x is an integer.
*/

int main() {
    set<int> numbers;
    int queries, type, number;
    cin >> queries;
    for(int i = 0; i < queries; i++){
        cin >> type >> number;
        if(type == 1){ //Add number
            numbers.insert(number);
        }
        else if(type == 2){ //Delete number
            numbers.erase(number);
        }
        else{ //Print number
            set<int>::iterator itr = numbers.find(number);
            if(itr != numbers.end()){
                cout << "Yes" << endl; 
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}