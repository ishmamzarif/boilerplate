#include <bits/stdc++.h>
using namespace std;

//checks if k-th bit is set or not
int check_kth_bit(int n, int k) {
  return n & (1 << k);
  //or return (n >> k) & 1;
}

//counts the number of set bits
int count_set_bits(int n) {
  int count = 0;
  for (int k = 0; k < 32; k++) {
    if (check_kth_bit(n, k)) 
      ans++;
  }
  return count;
}

//set_kth_bit of n
int set_kth_bit(int n, int k) {
    return x | (1 << k);
}

//unset kth bit of n
int unset_kth_bit(int n, int k) {
  return n & (~(1 << k));
}

//flip k-th bit of n
int toggle_kth_bit(int n, int k) {
  return n ^ (1 << k);
}

//returns true if n is a power of 2
int check_power_of_2(int n) {
  return count_set_bits == 1;
}

//prints binary form of any n
void print_binary(int n) {
    for (int i = 31; i >= 0; i--) {
        cout << (n >> i) & 1;
    }
}

void solve() {

}

int main (void) {
    int t; cin >> t;
    while (t--) solve();
}
