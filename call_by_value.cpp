#include <iostream>
using namespace std;

void callbyValue(int a , int b) {
    swap(a,b) ;
    cout << "Swap by Call By Value" << endl;
    cout << a << " " << b << endl;
}

// void callbyaddress(int *p , int *q) {
//     swap(p,q);
//     cout << ""
// }

int main() {
    int x=5, y=6;
    cout << "x=5 , y=6" << endl;
    
    callbyValue(x,y);
    //callbyvalue(&x ,&y);
    return 0;
}