#include <iostream>
using namespace std;
int main() {
    float A, bagi, tambah, kurang, kali;
        
    cin >> A;
    tambah = A + A;
    kurang = tambah - 1;
    kali = kurang*3;
    bagi = kali/2;
    
    cout << A << " plus " << A << " is " << tambah << endl;
    cout << "Minus one is " << kurang  << endl;
    cout << "Multiple three is " << kali << endl;
    cout << "divide two is " << bagi;
    
    return 0;
}
