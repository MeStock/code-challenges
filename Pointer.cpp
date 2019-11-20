#include <stdio.h>
#include <stdlib.h>
// Sample Input

// 4
// 5
// Sample Output

// 9
// 1

// a = a + b
// b = |a - b|
void update(int *a,int *b) {
    int temp = *a;
    *a += *b;
    *b = abs(temp - *b);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}