/*
    tzara_0x1d
*/

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef long long unsigned llu;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define fr(i, n) for (int i = 0; i < (n); i++)
#define repu(i, a, b) for (int i = (a); i < (b); i++)
#define rept(i, a, b) for (int i = (a); i <= (b); i++)
#define repur(i, a, b) for (int i = (a); i > (b); i--)
#define reptr(i, a, b) for (int i = (a); i >= (b); i--)

#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define len(v) (int)(v.size())
#define fir first
#define sec second

// ll gcd(ll a, ll b) {return (b == 0) ? a : gcd(b, a % b);}
// ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
// ll check_power_of_two (ll n) { return (n & (n - 1));}

const int MAX = 1e6;
const ll MOD = 1e9+7LL;

void solve() {
    int x, y; cin >> x >> y;

    int b = 4 * (x + y);

    double D = b*b - 4 * 12 * (x * y);

    double h1, h2;
    if (D == 0) 
        h1 = h2 = b / 2*12;
    else {
        h1 = (b + sqrt(D)) / 24;
        h2 = (b - sqrt(D)) / 24;
    }

    double v1 = h1 * (x - 2*h1) * (y - 2*h1);
    double v2 = h2 * (x - 2*h2) * (y - 2*h2);

    cout << fixed << setprecision(11) << max(v1, v2) << endl;
}


int main (void) {
    FAST_IO;

    int t; cin >> t;

    while (t--)
        solve();

    return 0;
}


    
