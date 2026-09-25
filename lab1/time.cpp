#include<iostream>
using namespace std;

class Time {

    int hh , mm , ss ;
 public :
     Time(int x) {
        hh = x/3600;
        x = x%3600;

        mm = x/60;
        x = x%60;

        ss = x;
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};


int main(){
   Time a(4000);// x; //(40000);
   a.show();
   
return 0;
}