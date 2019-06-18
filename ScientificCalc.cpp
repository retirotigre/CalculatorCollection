#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const int PI = 3.14159265359;

class Rectangle {
    int width, height;
public:
    void set_values (int, int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
    width = x;
    height = y;
}

class Triangle {
    int width, height;
public:
    void set_values (int, int);
    int area() {return width*height/2;}
};

void Triangle::set_values (int x, int y) {
    width = x;
    height = y;
}

class Circle {
    int radius;
public:
    void set_value (int);
    int area() {return PI*(radius*radius);}
};

void Circle::set_value (int x) {
    radius = x;
}



int main () {
    int rect_width, rect_height;
    int tri_width, tri_height;
    int radius;
    int choice;
    char another;
    
    Rectangle rect;
    Triangle tri;
    Circle circ;
    
    for(;;){
    cout << "Find the area of a Rectangle, a Triangle, or a Circle?" << endl;
    cout << "Press 1 for Rectangle" << endl;
    cout << "Press 2 for Triangle" << endl;
    cout << "Press 3 for Circle" << endl;
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "What is the width? ";
            cin >> rect_width;
            cout << "\nWhat is the height? ";
            cin >> rect_height;
            rect.set_values(rect_width, rect_height);
            cout << "\nThe area of the rectangle is " << rect.area() << "\n" << endl;
            break;
        case 2:
            cout << "What is the width? ";
            cin >> tri_width;
            cout << "\nWhat is the height? ";
            cin >> tri_height;
            tri.set_values(tri_width, tri_height);
            cout << "\nThe area of the triangle is " << tri.area() << "\n" << endl;
            break;
        case 3:
            cout << "What is the radius? ";
            cin >> radius;
            circ.set_value(radius);
            cout << "\nThe area of the circle is " << circ.area() << "\n" << endl;
            break;
        default:
            cout << "You have pressed an incorrect key. Please make your choice again " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
            }
        cout << "Find the area of another shape? (Y/N)" << endl;
        cin >> another;
            if (another == 'y' || another == 'Y')
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            else
            {
                cout << "Goodbye!" << endl;
                break;
            }
    }
    
    return 0;
}

