#include <iostream>
using namespace std;
int main() {
  int n, p, q = 0;
    
  cin >> n;

    while (n != 0){
        p = n % 10; 
        q = q * 10 + p;
        n = n / 10; } 
    
        cout << q;
    
    return 0;
}
