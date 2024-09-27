#include <iostream>
using namespace std;

bool isPalindrome(long num) {
    long original = num;
    long reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

long largestPalindromeLessThanN(long n) {
    long maxPalindrome = -1;

    for (long i = 999; i >= 100; --i) {
        for (long j = i; j >= 100; --j) {
            long product = i * j;
            if (product < n && isPalindrome(product)) {
                if (product > maxPalindrome) {
                    maxPalindrome = product;
                }
            }
        }
    }

    return maxPalindrome;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;
        long result = largestPalindromeLessThanN(n);
        
       cout<<result<<endl;
    }

    return 0;
}
