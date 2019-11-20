#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Sample Input

// 4
// 1 4 3 2
// Sample Output

// 2 3 4 1
int main() {
    int n, number;
    cin >> n;
    int arr[n];
    for(int i = n - 1; i >= 0; i--){
        cin >> number;
        arr[i] = number;
    }
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";  
    }
    return 0;
}
