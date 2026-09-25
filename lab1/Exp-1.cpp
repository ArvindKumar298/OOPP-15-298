#include<iostream>
#include <string>
using namespace std;

class Student {
public :

    string name;
    int roll;
    float cgpa ;

    void show(Student s) {
        cout << "Name : " << s.name << endl;
        cout << "Roll no. : " << s.roll << endl;
        cout << "cgpa Obtained : " << s.cgpa << endl;
        cout << endl;
        
    }
};

int main(){
   
    Student s1;
    s1.name = "Arvind Kumar";
    s1.roll = 298;
    s1.cgpa = 8.39;


    Student s2;
    s2.roll = 218;
    s2.name = "Harsh Kumar";
    s2.cgpa = 8.00;

    Student s3;
    s3.roll = 248;
    s3.name = "ash Kumar";
    s3.cgpa = 9.03;

    s1.show(s1);
    s2.show(s2);
    s2.show(s3);

return 0;
}