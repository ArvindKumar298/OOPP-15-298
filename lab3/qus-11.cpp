#include <iostream>
using namespace std;

class point {
public:
    int x, y;

    void input();
    void show();
};

inline void point::input() {
    cout << "Enter value of x and y :" << endl;
    cin >> x >> y;
}

inline void point::show() {
    cout << "value of x is " << x << endl;
    cout << "value of y is " << y << endl;
}
int main() {
    point p;

    p.input();
    p.show();

    return 0;
}