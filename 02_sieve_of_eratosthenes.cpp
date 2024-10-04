/*
    tzara_0x1d
*/

#include <bits/stdc++.h>
using namespace std;

//initializing a global sieve of size n, initially all 0 (prime)
vi primes(n+1, 0);

void sieve(int n);
{
    //loads up the sieve
    for (int i = 2; i*i <= n; i++) {
        if (!prime[i]) {
            for (int j = i*i; j <= n; j += i)
                prime[i] = true;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

void solve() {
    
}


int main (void) {
    FAST_IO;

    // int t; cin >> t;

    // while (t--)
        solve();

    return 0;
}







    
