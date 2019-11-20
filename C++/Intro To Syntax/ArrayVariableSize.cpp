#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Sample Input

// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3
// Sample Output

// 5
// 9
int main() {
    int numberOfArrays, numberOfQueries;
    cin >> numberOfArrays >> numberOfQueries;
    int **A = new int*[numberOfArrays];
    for(int i = 0; i < numberOfArrays; i++){
        int k;
        cin >> k;
        A[i] = new int[k];
        for(int j = 0; j < k; j++){
            cin >> A[i][j];
        }
    }

    for(int l = 0; l < numberOfQueries; l++){
        int x, y;
        cin >> x >> y;
        cout << A[x][y] << endl;
    }
    return 0;
}