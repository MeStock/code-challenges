#include <iostream>
#include <cstdio>
using namespace std;

// Sample Input

// 3
// 4
// 6
// 5
// Sample Output

// 6
int max_of_four(int x, int y, int z, int u){
    int max;
    if(max < x){
        max = x;
    }
    if(max < y){
        max = y;
    }
    if(max < z){
        max = z;
    }
    if(max < u){
        max = u;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}