#include <iostream>
using namespace std;


void input(string &name, string &branch, string &section, int &roll, int marks[]) {
    cout << "Enter name of Student: ";
    cin >> name;

    cout << "Enter Branch: ";
    cin >> branch;

    cout << "Enter Section: ";
    cin >> section;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}


void findSum(int &sum, float &percent, int marks[]) {
    sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    percent = sum / 5.0;
}


void show(string name, string branch, string section, int roll, float percent) {
    cout << "Student Details" <<endl;
    cout << "Student Name : " << name << endl;
    cout << "Branch       : " << branch << endl;
    cout << "Section      : " << section << endl;
    cout << "Roll No.     : " << roll << endl;
    cout << "Percentage   : " << percent << "%" << endl;
}

int main() {
    string name, branch, section;
    int roll;
    int marks[5];
    int sum;
    float percent;

    input(name, branch, section, roll, marks);
    findSum(sum, percent, marks);
    show(name, branch, section, roll, percent);

    return 0;
}