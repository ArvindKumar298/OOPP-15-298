#include <iostream>
using namespace std;

class point{

    int x , y ;

    public :

        // list initation :
        // point() : x{4},y{5} 
        // {
        //     cout << "Default Constructor" << endl;
        // }

        point(int p=0 ,int q=0) : x{p}, y{q}
        {
            cout <<"Parametrize Constuctor" << endl;
        }

        void add(){
            int sum = x+y;
            cout <<"Sum = " << sum << endl;
        }

        point sum(point q) {
            point r;
           r.x =  x + q.x;
           r.y =  y + q.y;

           return r;
        }

        point sum_(point q) {
            return point(x+q.x , y+q.y);
        }

        point sum_2(point p , point q) {
            return point(x+p.x , y+q.y);
        }

        void show() {
            cout << "value of a : " << x << endl;
            cout << "value of b : " << y <<endl;
        }
};
int main() {
    point p(5,7), q(23 , 43);

    point r= p.sum(q);
    r.show();

    
    //p.show();
    // q.show();
    // q.add();
}
