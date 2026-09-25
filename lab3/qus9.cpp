#include<iostream>
using namespace std;

auto area(float radius) {
    
    return (3.14*radius);
}

auto area(float length, float width) {
   
    return (length*width);
}

auto area(int side) {
    
    return (side*side);
}

auto area(float base , float height ,bool triangle) {
    
    if(triangle == 1) {
       cout << "area of triangle : ";
        return (base*height);

    } else {
        cout << "area of paralellgram : ";
        return (base*height);
    }
     
}

int main(){

    cout << "Area of circle is " << area(5.47f) << endl;
    cout << "Area of reactangle is " << area(3.4f, 58.2f) << endl;
    cout << "Area of square is " << area(34) << endl;
    cout << area(2.3f , 5.0f ,1) << endl;
    cout << area(10.0f , 9.0f ,0) << endl;

return 0;
}