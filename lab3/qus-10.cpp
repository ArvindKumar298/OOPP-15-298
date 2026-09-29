#include<iostream>
using namespace std;

class arthematic{
public :  
    arthematic(int a=23, int b=45) {
       int sum = a+b;

       cout << "Sum of a and b is "<< sum << endl;
    }
};

void product(int a , float b){
        cout << "Product of a and b is " << (a*b) << endl;
    }

void product(float a , float b){
        cout << "Product of a and b is " << (a*b) << endl;
    }

 void product(double a , double b){
        cout << "Product of a and b is " << (a*b) << endl;
    }



inline int add (int a , int b) {
    return a+b;
}


int main(){

    arthematic ath ;
    product(4,5.0f);
    product(34.01f , 23.02f);
    product(10.00, 20.004);

    cout << "Sum of a and b is " << add(34,67) << endl;
    

return 0;
}