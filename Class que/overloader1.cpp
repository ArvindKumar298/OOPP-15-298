#include<iostream>
using namespace std;

class Complex {

    int real , img ;

public:

    Complex(int r=0 , int i=0) : real{r}, img{i} {};

    void show() {
        cout << real << " ; " << img << "i"  << endl;
    }

    friend Complex operator + (Complex c2 , int x );
};



Complex operator + (Complex c1, int x ) {
    return (c1.real+ x , c1.img+x);
}

int main(){
    Complex c1(3 , 19);
    Complex c2(34 , 56);
    c1.show();
    
    Complex c3 = c1+5;

    c3.show();

return 0;
}