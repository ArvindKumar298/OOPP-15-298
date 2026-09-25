#include<iostream>
using namespace std;

class student {
public:
    string name , branch ;
    int roll ;

    void input () {
        cin >> name >> branch >> roll ;
    }

    void show() {


        cout << " Name : " << name<< endl  ;
        cout << "Branch : " << branch<< endl;
        cout << "Roll no : " << roll << endl;
        cout << endl;

    }
    
};

int main(){
    student s1 , s2 ;

    s1.input();
    s2.input();

    s1.show();
    s2.show();
    
return 0;
}