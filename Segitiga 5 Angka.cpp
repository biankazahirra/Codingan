#include <iostream>
using namespace std;
int main(){
    int yubisayu;
 
  cin >> yubisayu ;
 
 
  for(int a = 1; a <= yubisayu; a++) {
    for(int b = 1; b < a; b++) {
        cout << "  "; } 
    for(int c = yubisayu; c >= a; c--){
        cout << c << " "; }
     cout << endl; }
 
  return 0;
}
