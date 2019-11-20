#include <iostream>
#include <cstdio>
using namespace std;
// Input Format

// Input consists of the following space-separated values: int, long, char, float, and double, respectively.

// Output Format

// Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

// Sample Input

// 3 12345678912345 a 334.23 14049.30493
// Sample Output

// 3
// 12345678912345
// a
// 334.230
// 14049.304930000

int main() {
    int d;
    long ld;
    char c;
    float f;
    double lf;
    scanf("%d %ld %c %f %lf", &d, &ld, &c, &f, &lf);
    printf("%d\n", d);
    printf("%ld\n", ld);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", lf);
    return 0;
}