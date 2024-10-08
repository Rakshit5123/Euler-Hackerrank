#include <iostream>
using namespace std;

long long check_multiple(long long n) {
    long long sum = 0;
    for (long long i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long result = check_multiple(n); // Change to long long
        cout << result << endl;
    }
    return 0;
}
