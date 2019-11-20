#include <bits/stdc++.h>

using namespace std;
// Sample Input 0

// 5
// Sample Output 0

// five
// Explanation 0

// five is the English word for the number 5.

// Sample Input 1

// 8
// Sample Output 1

// eight
// Explanation 1

// eight is the English word for the number 8.

// Sample Input 2

// 44
// Sample Output 2

// Greater than 9

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(n == 1){
        cout << "one";
    }
    else if(n == 2){
        cout << "two";
    }
    else if(n == 3){
        cout << "three";
    }
    else if(n == 4){
        cout << "four";
    }
        else if(n == 5){
        cout << "five";
    }
    else if(n == 6){
        cout << "six";
    }
    else if(n == 7){
        cout << "seven";
    }
    else if(n == 8){
        cout << "eight";
    }
    else if(n == 9){
        cout << "nine";
    }
    else{
        cout << "Greater than 9";
    }
    return 0;
}