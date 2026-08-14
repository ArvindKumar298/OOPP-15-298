#include <iostream>
using namespace std;

class complex {
    int real , img;

    public : 
        void input() {
            cout << "Enter the value :";
            cin >> real >> img ;

        }

        void add(complex p) {
            real = real+p.real;
            img= img+p.img;
        }

        void show() {
            cout << real;

            if(img>=0) {
                cout << "+" << img << "i" <<endl;
            } else {
                cout << img << "i" << endl;
            }

        }
};

int main() {
    complex c1, c2 ;

    c1.input();
    //c2.input();

    c1.show();
    //c2.show();
}