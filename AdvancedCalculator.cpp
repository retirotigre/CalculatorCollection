#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

void firstChoice(int option, int choice1, int choice2, int choice3, int choice4);
int simpleMenu(int choice1);
int conversionMenu(int choice2);
int shapeMenu(int choice3);
void simpleMath(int choice1);
void conversionMath(int choice2);
void shapeMath(int choice3);
const int PI = 3.14159265359;

//Simple Math Functions
void add()
{
    int num1, num2;
    cout << "First number: ";
    cin >> num1;
    cout << "\nSecond number: ";
    cin >> num2;
    cout << "\n" << num1 << "+" << num2 << "=" << num1+num2 << endl;
};
void subtract()
{
    int num1, num2;
    cout << "First number: ";
    cin >> num1;
    cout << "\nSecond number: ";
    cin >> num2;
    cout << "\n" << num1 << "-" << num2 << "=" << num1-num2 << endl;
};
void divide()
{
    double num1, num2;
    cout << "First number: ";
    cin >> num1;
    cout << "\nSecond number: ";
    cin >> num2;
    cout << "\n" << num1 << "/" << num2 << "=" << num1/num2 << endl;
};
void multiple()
{
    int num1, num2;
    cout << "First number: ";
    cin >> num1;
    cout << "\nSecond number: ";
    cin >> num2;
    cout << "\n" << num1 << "*" << num2 << "=" << num1*num2 << endl;
};
void exponent()
{
    int num1, num2;
    cout << "Base number: ";
    cin >> num1;
    cout << "\nExponent: ";
    cin >> num2;
    cout << "\n" << num1 << "^" << num2 << "=" << pow(num1,num2) << endl;
};
void tangent()
{
    double num1;
    cout << "Number: ";
    cin >> num1;
    cout << "\nTan(" << num1 << ") = " << tan(num1) << endl;
};
void sine()
{
    double num1;
    cout << "Number: ";
    cin >> num1;
    cout << "\nSin(" << num1 << ") = " << sin(num1) << endl;
};
void logs()
{
    double num1, num2;
    cout << "Base Number: ";
    cin >> num1;
    cout << "\nNumber: ";
    cin >> num2;
    cout << "\nlog" << num1 << "(" << num2 << ")" << " = " << log10(num2)/log10(num1) << endl;
    
};
void logsTen()
{
    double num1;
    cout << "Number: ";
    cin >> num1;
    cout << "\nlog10(" << num1 << ")" << " = " << log10(num1) << endl;
};
void cosine()
{
    double num1;
    cout << "Number: ";
    cin >> num1;
    cout << "\nCos(" << num1 << ") = " << cos(num1) << endl;
};
void raiseSecondPower()
{
    int num1, square = 2;
    cout << "Number: ";
    cin >> num1;
    cout << "\n" << num1 << "^2 = " << pow(num1,square) << endl;
};
void squareRoot()
{
    double num1;
    cout << "Number: ";
    cin >> num1;
    cout << "\nThe square root of " << num1 << " is " << sqrt(num1) << endl;
};


//Conversion Functions
void feetToMeters()
{
    double num1;
    double meter = 3.048;
    cout << "Feet: ";
    cin >> num1;
    cout << "\n" << num1 << " feet = " << num1*meter << " meters." << endl;
};

void metersToFeet()
{
    double num1;
    double foot = .3048;
    cout << "Meters:  ";
    cin >> num1;
    cout << "\n" << num1 << " meters= " << num1*foot << " feet." << endl;
};
void centimetersToInches()
{
    double num1;
    double inch = 0.393701;
    cout << "Centimers: ";
    cin >> num1;
    cout << "\n" << num1 << " cm = " << num1*inch << " inches." << endl;
};
void inchesToCentimeters()
{
    double num1;
    double cm = 2.54;
    cout << "Inches: ";
    cin >> num1;
    cout << "\n" << num1 << " in = " << num1*cm << " centimeters." << endl;
};
void inchesToMillimeters()
{
    double num1;
    double mm = 25.4;
    cout << "Inches: ";
    cin >> num1;
    cout << "\n" << num1 << " in = " << num1*mm << " millimeters." << endl;
};
void millimetersToInches()
{
    double num1;
    double in = 0.0393701;
    cout << "Millimeters: ";
    cin >> num1;
    cout << "\n" << num1 << " mm = " << num1*in << " inches." << endl;

};
void yardsToMeters()
{
    double num1;
    double meter = 0.9144;
    cout << "Yards: ";
    cin >> num1;
    cout << "\n" << num1 << " yards = " << num1*meter << " meters." << endl;
};
void metersToYards()
{
    double num1;
    double yard = 1.09361;
    cout << "Meters: ";
    cin >> num1;
    cout << "\n" << num1 << " meters = " << num1*yard << " yards." << endl;
};

void milesToKilometers()
{
    double num1;
    double km = 1.60934;
    cout << "Miles: ";
    cin >> num1;
    cout << "\n" << num1 << " miles = " << num1*km << " kilometers." << endl;
};
void kilometersToMiles()
{
    double num1;
    double mile = 0.621371;
    cout << "Kilometers: ";
    cin >> num1;
    cout << "\n" << num1 << " kilometers = " << num1*mile << " miles." << endl;

};


//Shape Functions
class Rectangle {
    int width, height;
public:
    void set_values (int,int);
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

int main()
{
    int option = 0;
    int choice1 = 0;
    int choice2 = 0;
    int choice3 = 0;
    int choice4 = 0;
    
    firstChoice(option, choice1, choice2, choice3, choice4);
}

void firstChoice(int option, int choice1, int choice2, int choice3, int choice4)
{
    for(;;)
    {
    cout << "Welcome to the Scientific Calculator!" << "\n" << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. Simple math" << endl;
    cout << "2. Conversion" << endl;
    cout << "3. Area of a Shape" << endl;
    cout << "4. Quit" << endl;
    cin >> option;
    
    if(option == 1)
    {
        choice1 = simpleMenu(choice1);
        
        simpleMath(choice1);
    }
    
    else if(option == 2)
    {
        choice2 = conversionMenu(choice2);
        
        conversionMath(choice2);
    }
    
    else if(option == 3)
    {
        choice3 = shapeMenu(choice3);
        
        shapeMath(choice3);
    }

    else if(option == 4)
    {
        exit(1);
    }
        
    else
    {
        cout << "You have pressed an incorrect key. Try again\n\n";
    }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}

int simpleMenu(int choice1)
{
    cout << "\n" << "Menu: " << endl;
    cout << "1.) Add" << endl;
    cout << "2.) Subtract" << endl;
    cout << "3.) Divide" << endl;
    cout << "4.) Multiple" << endl;
    cout << "5.) Exponent" << endl;
    cout << "6.) Tangent" << endl;
    cout << "7.) Sine" << endl;
    cout << "8.) Logarithm" << endl;
    cout << "9.) Logarithm 10" << endl;
    cout << "10.) Cosine" << endl;
    cout << "11.) Square a number" << endl;
    cout << "12.) Square root" << endl;
    cout << "13.) Exit the program" << "\n" << endl;
    cout << "Please Enter in your choice:" << endl;
    cin >> choice1;
    
    return choice1;
}

int conversionMenu(int choice2)
{
    cout << "\n" << "Menu: " << "\n" << endl;
    cout << "1.) Feet to Meters" << endl;
    cout << "2.) Meters to Feet" << endl;
    cout << "3.) Centimeters to Inches" << endl;
    cout << "4.) Inches to Centimeters" << endl;
    cout << "5.) Inches to Millimeters" << endl;
    cout << "6.) Millimeters to Inches" << endl;
    cout << "7.) Yards to Meters" << endl;
    cout << "8.) Meters to Yards" << endl;
    cout << "9.) Miles to Kilometers" << endl;
    cout << "10.) Kilometers to Miles" << endl;
    cout << "11.) Exit the program" << "\n" << endl;
    cout << "Please Enter in your choice:" << endl;
    cin >> choice2;
    
    return choice2;
}

int shapeMenu(int choice3)
{
    cout << "\nFind the area of a Rectangle, a Triangle, or a Circle?" << endl;
    cout << "1.) Rectangle" << endl;
    cout << "2.) Triangle" << endl;
    cout << "3.) Circle" << endl;
    cout << "4.) Quit" << endl;
    cout << "Please Enter in your choice:" << endl;
    cin >> choice3;
    
    return choice3;
}

void simpleMath(int choice1)
{
    for(;;)
    {
        if(choice1 == 1)
        {
            add();
            break;
        }
        
        else if(choice1 == 2)
        {
            subtract();
            break;
        }
        
        else if(choice1 == 3)
        {
            divide();
            break;
        }
        
        else if(choice1 == 4)
        {
            multiple();
            break;
        }
        
        else if(choice1 == 5)
        {
            exponent();
            break;
        }
        
        else if(choice1 == 6)
        {
            tangent();
            break;
        }
       
        else if(choice1 == 7)
        {
            sine();
            break;
        }
        
        else if(choice1 == 8)
        {
            logs();
            break;
        }
        
        else if (choice1 == 9)
        {
            logsTen();
            break;
        }
        
        else if(choice1 == 10)
        {
            cosine();
            break;
        }
        
        else if(choice1 == 11)
        {
            raiseSecondPower();
            break;
        }
        
        else if(choice1 == 12)
        {
            squareRoot();
            break;
        }
        else if (choice1 == 13)
        {
            exit(1);
        }
        else
        {
            cout << "You have pressed an incorrect key. Try again\n" << endl;
            break;
        }
    }
}

void conversionMath(int choice2)
{
    for(;;)
    {
        if(choice2 == 1)
        {
            feetToMeters();
            break;
        }
        
        else if(choice2 == 2)
        {
            metersToFeet();
            break;
        }
        
        else if(choice2 == 3)
        {
            centimetersToInches();
            break;
        }
        
        else if(choice2 == 4)
        {
            inchesToCentimeters();
            break;
        }
        
        else if(choice2 == 5)
        {
            inchesToMillimeters();
            break;
        }
        
        else if(choice2 == 6)
        {
            millimetersToInches();
            break;
        }
        
        else if(choice2 == 7)
        {
            yardsToMeters();
            break;
        }
        
        else if(choice2 == 8)
        {
            metersToYards();
            break;
        }
        
        else if (choice2 == 9)
        {
            milesToKilometers();
            break;
        }
        
        else if(choice2 == 10)
        {
            kilometersToMiles();
            break;
        }
        
        else if (choice2 == 11)
        {
            exit(1);
        }
        else
        {
            cout << "You have pressed an incorrect key. Try again\n" << endl;
            break;
        }
    }
}
void shapeMath(int choice3)
{
    int rect_width, rect_height;
    int tri_width, tri_height;
    int radius;
    
    Rectangle rect;
    Triangle tri;
    Circle circ;
    
    for(;;){
        if(choice3 == 1)
            {
            cout << "What is the width? ";
            cin >> rect_width;
            cout << "\nWhat is the height? ";
            cin >> rect_height;
            rect.set_values(rect_width, rect_height);
            cout << "\nThe area of the rectangle is " << rect.area() << "\n" << endl;
            break;
            }
        else if(choice3 == 2)
            {
            cout << "What is the width? ";
            cin >> tri_width;
            cout << "\nWhat is the height? ";
            cin >> tri_height;
            tri.set_values(tri_width, tri_height);
            cout << "\nThe area of the triangle is " << tri.area() << "\n" << endl;
            break;
            }
        else if(choice3 == 3)
            {
            cout << "What is the radius? ";
            cin >> radius;
            circ.set_value(radius);
            cout << "\nThe area of the circle is " << circ.area() << "\n" << endl;
            break;
            }
        else if (choice3 == 4)
            {
                exit(1);
            }
        else
        {
            cout << "You have pressed an incorrect key. Try again\n" << endl;
            break;
        }
    }
}
