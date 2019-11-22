#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has Q queries:

 1. x,y: Add the marks y to the student whose name is x.

2. x: Erase the marks of the students whose name is x.

3 x: Print the marks of the students whose name is x. (If x didn't get any marks print 0.)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student.
*/
/*
Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0
*/
int main() {
    map<string, int> students;
    int queries, type, score;
    string name;
    cin >> queries;
    for(int i = 0; i < queries; i++){
        cin >> type >> name;
        if(type == 1){ //Add
            cin >> score;
            map<string, int>::iterator itr = students.find(name);
            if(itr != students.end()){
                score += students[name];
                (*itr).second = score;
            }else{
                students.insert(make_pair(name, score));
            }
        }
        else if(type == 2){ //Erase
            students.erase(name);
        }
        else{ //Print
            cout << students[name] << endl;
        }
    }
    return 0;
}