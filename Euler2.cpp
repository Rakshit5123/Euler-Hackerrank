#include <iostream>
using namespace std;

long long even_fibonacci(long long n) {
    long long sum = 0;
    long long a = 0, b = 1, c = 0;

    while (true) {
        c = a + b;
        if (c > n) {
            break;
        }
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
    }
    
    return sum;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long result = even_fibonacci(n); 
        cout << result << endl;
    }
    return 0;
}
