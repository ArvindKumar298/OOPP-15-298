#include <iostream>
using namespace std;

class point{

    int x , y ;

    public :
       
        point(int p=0 ,int q=0) : x{p}, y{q}
        {
            cout <<"Parametrize Constuctor" << endl;
        }

       

        void show() {
            cout << "value of a : " << x << endl;
            cout << "value of b : " << y <<endl;
        }
};
int main() {
    point p(5,7), q(23 , 43);
}
