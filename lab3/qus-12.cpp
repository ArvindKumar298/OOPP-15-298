#include<iostream>
using namespace std;

class Time {
private:
    int hh;
    int mm;
    int ss;

public:
    void input(int h = 0, int m = 0, int s = 0);
    void show();
};

void Time::input(int h, int m, int s) {
    hh = h;
    mm = m;
    ss = s;
}

void Time::show() {
    if (hh < 10) cout << "0";
    cout << hh << ":";
    
    if (mm < 10) cout << "0";
    cout << mm << ":";
    
    if (ss < 10) cout << "0";
    cout << ss << endl;
}

int main() {
    Time t1, t2;

    t1.input(10, 45, 30);
    t2.input();

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2 (default values): ";
    t2.show();

    return 0;
}