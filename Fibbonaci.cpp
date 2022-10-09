#include <iostream>
using namespace std;
int main() {
    int angka, n1 = 0, n2 = 1, fb;
    
    cin >> angka;
    
    for(int a = 1; a <= angka; a++)
        if(a == 1){
            cout << n1 << " "; }
        else if (a == 2){
            cout << n2 << " "; }
        else {fb = n2 + n1;
              n1 = n2;
              n2 = fb;
              cout << fb << " "; }
}
