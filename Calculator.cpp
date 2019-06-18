#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int AddNum(int, int);
int SubNum(int, int);
int MultNum(int, int);
double DiviNum(int, int);
int ModNum(int, int);
int PowNum(int, int);
double ResultSin(int);
double ResultCos(int);

const float PI = 3.14159265;

int main ()
{
    int selection;
    int num1;
    int num2;
    
    for(;;){
        cout << "********************CALCULATOR*********************" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modular Division" << endl;
        cout << "6. Raise x to the power of y" << endl;
        cout << "7. Sine(x)" << endl;
        cout << "8. Cosine(x)" << endl;
        cout << "9 - Quit" << endl;
        cout << "***************************************************" << endl;
        cout << "Enter a selection please" << endl;
        cin >> selection;
        
        if (selection == 1)
        {
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter next number:" << endl;
            cin >> num2;
            cout << "The sum of " << num1 << " and " << num2 << " is " << AddNum(num1, num2) << endl;
        }
        else if (selection == 2)
        {
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter next number:" << endl;
            cin >> num2;
            cout << "The difference of " << num1 << " and " << num2 << " is " << SubNum(num1, num2) << endl;
        }
        else if (selection == 3)
        {
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter next number:" << endl;
            cin >> num2;
            cout << "The product of " << num1 << " and " << num2 << " is " << MultNum(num1, num2) << endl;
        }
        else if (selection == 4)
        {
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter next number:" << endl;
            cin >> num2;
            cout << "The quotient of " << num1 << " and " << num2 << " is " << DiviNum(num1, num2) << endl;
        }
        else if (selection == 5)
        {
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter next number:" << endl;
            cin >> num2;
            cout << "The remainder of " << num1 << " / " << num2 << " is " << ModNum(num1, num2) << endl;
        }
        else if (selection == 6)
        {
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter next number:" << endl;
            cin >> num2;
            cout << num1 << " to the power of " << num2 << " is " << PowNum(num1, num2) << endl;
        }
        else if (selection == 7)
        {
            cout << "Enter number:" << endl;
            cin >> num1;
            cout << "Sine(" << num1 << ")" << " is " << ResultSin(num1) << endl;
        }
        else if (selection == 8)
        {
            cout << "Enter number:" << endl;
            cin >> num1;
            cout << "Cos(" << num1 << ")" << " is " << ResultCos(num1) << endl;
        }
        else if (selection == 9)
        {
            break;
        }
        else
        {
            cerr << "Error, please make your selection again" << endl;
        }
        
        
        cout << "Press any key to continue" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        
    };
    
    if (selection == 9)
    {
        exit(1);
    }
    
    return 0;
}

int AddNum(int num1, int num2)
{
    return num1+num2;
}
int SubNum(int num1, int num2)
{
    return num1-num2;
}
int MultNum(int num1, int num2)
{
    return num1*num2;
}
double DiviNum(int num1, int num2)
{
    return num1/num2;
}
int ModNum(int num1, int num2)
{
    return fmod (num1, num2);
}
int PowNum(int num1, int num2)
{
    return pow(num1,num2);
}
double ResultSin(int num1)
{
    return sin(num1*PI/180);
}
double ResultCos(int num1)
{
    return cos(num1*PI/180);
}
