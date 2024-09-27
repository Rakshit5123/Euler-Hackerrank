#include<iostream>
using namespace std;

long long series(long k, const string& num) {
    long long maxProduct = 0;

    for (long i = 0; i <= num.length() - k; i++) {
        long long currentProduct = 1;  
        bool hasZero = false;

        for (long j = 0; j < k; j++) {
            int digit = num[i + j] - '0';
            
            if (digit == 0) {
                hasZero = true;
                break;
            }
            currentProduct *= digit;
        }
        
        if (!hasZero && currentProduct > maxProduct) {
            maxProduct = currentProduct;
        }
    }
    
    return maxProduct;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long n;
        int k;
        cin >> n >> k;
        
        string num;
        cin >> num;

        if (k <= n && n > 0) {
            long long result = series(k, num);
            cout << result << endl;
        }
    }
    return 0;
}