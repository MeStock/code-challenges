#include <iostream>
#include <string>
using namespace std;

// Sample Input

// abcd
// ef
// Sample Output

// 4 2
// abcdef
// ebcd af

int main() {
    string a,b,c,swapA, swapB;
    char firstA, firstB;
	cin >> a >> b;
    c = a + b;
    swapA += a[0];
    swapB += b[0];
    for(int i = 1; i < b.size(); i++){
        swapA += b[i];
    }
    for(int j = 1; j < a.size(); j++){
        swapB += a[j];
    }
    cout << a.size() << " " << b.size() << endl;
    cout << c << endl;
    cout << swapB << " "<< swapA << endl;
  
    return 0;
}