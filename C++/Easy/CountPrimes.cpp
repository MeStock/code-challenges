using namespace std;

/*
Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/
class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1) return 0;
        bool isPrime[n];
        for(int l = 0; l < n; l++){
            isPrime[l] = true;
        }
        
        for(int i = 2; i * i < n; i++){
            
            if(!isPrime[i]) continue;
            for(int j = i * i; j < n; j+=i){
                isPrime[j] = false;
            }
        }
        int count = 0;
        for(int k = 2; k < n; k++){
            if(isPrime[k]) count++;
        }
        return count;
    }
};