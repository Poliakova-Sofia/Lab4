#include <iostream>
#include <cmath> // maths library connection 
using namespace std;
// task start

//describe the function RingS (R1, R2) of real type that finds the area 
//of a ring enclosed between two circles with common centre and radii R1 and R2 
//(R1 and R2 are real, R1> R2). Use it to find the area of three rings,
//for which the outer and inner radii are given. 
//use the formula for the area of a circle of radius R: S = π - R2 . 
//assume the value of π to be 3.14.

void RingS();// task 1 function declaration
void Calculation(double or1, double ir1, double or2, double ir2, double or3, double ir3);
bool CheckRadius();
double RingS1(double& OR, double& IR);

//The numbers x, y, x1, y1, x2, y2 are given. 
//Check the truth of the statement: 
//"The point with with coordinates (x, y) is inside the rectangle,
//the upper left vertex whose upper left vertex has coordinates (x1, y1),
//lower right vertex has coordinates (x2, y2), 
//and the sides are parallel to the to the coordinate axes".

void Boolean29(); // task 2 function declaration 
bool CheckInput(int& X, int& Y);
bool Calculation(int& X, int& Y);
void Solving();

//A three-digit number is given. 
//Find the sum and multiplication of its digits.

void integer11();// task 3 function declaration
void solveinteger11(); 
int InputThreeIntegerNumber(int three);
void Calculation();
void OutputResult(int sum, int multiplying);

int main() { // menu for moving between tasks
    int menu; // diclaration of the variable
    cout << "      *** Menu ***     " << endl;
    cout << " Task number: ";
    cin >> menu; // input the task number
    switch (menu)
    { // moving between tasks
    case 1: RingS(); break;
    case 2: Boolean29(); break;
    case 3: integer11(); break;
    default: cout << " Wrong task! (Only 1-3)" << endl;
        // error notification
    }
}
//task 1
void RingS() {
    CheckRadius();
}
bool CheckRadius() {
    cout << "   ***proc19*** " << endl;
    double or1, ir1; // declaration of the variable 
    double or2, ir2;
    double or3, ir3;
    cout << " Enter the outer and inner radius of the first ring: ";
    cin >> or1 >> ir1;// input number
    cout << " Enter the outer and inner radius of the second ring: ";
    cin >> or2 >> ir2;// input number
    cout << " Enter the outer and inner radius of the third ring: ";
    cin >> or3 >> ir3;// input number
    if (or1, ir1, or2, ir2, or3, ir3 > 0 && or1 > ir1 && or2 > ir2 && or3 > ir3) {
    // condition if the number entered corretly
        Calculation(or1, ir1, or2, ir2, or3, ir3);
    }
    else {
        cout << " Wrong! ";
        return -1;
    }// error notification
    return 0;
}
void Calculation(double or1, double ir1, double or2, double ir2, double or3, double ir3) {
    
    double ar1 = RingS1(or1, ir1);
    double ar2 = RingS1(or2, ir2);
    double ar3 = RingS1(or3, ir3);
    //output results
    cout << " Area of the first ring: " << ar1 << endl;
    cout << " Area of the second ring: " << ar2 << endl;
    cout << " Area of the third ring: " << ar3 << endl;

    double RingS(double R1, double R2);
}
double RingS1(double& OR, double& IR) {
    //calculation area
    const double pi = 3.14;
    double ao = pi * (OR * OR);
    double ai = pi * (IR * IR);
    double ra = ao - ai;
    return ra;
}
//task2
void Boolean29() 
{
    Solving();
}
bool CheckInput(int x, int y, int x1, int x2, int y1, int y2)
{ 
    // condition if the number entered corretly
    if (x >= -100 && x <= 100 && y >= -100 && y <= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    if (x1 >= -100 && x1 <= 100 && x2 >= -100 && x2 <= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    if (y1 >= -100 && y1 <= 100 && y2 >= -100 && y2 <= 100)
    {
        return true;
    }
    else // error notification
    {
        return false;
    }
}
bool Calculation(int x, int y, int x1, int x2, int y1, int y2)
{
    //calculation task2
    return (x >= x1 && y <= y1) && (x <= x2 && y >= y2);
}

void Solving()
{
    //output results
    cout << "   ***boolean29*** " << endl;
    int x, y, x1, x2, y1, y2; // declaration of the variable 
    cout << " Enter x, y: ";
    cin >> x >> y;//input number
    cout << " Enter x1, y1: ";
    cin >> x1 >> y1;//input number
    cout << " Enter x2, y2: ";
    cin >> x2 >> y2;//input number

    if (CheckInput(x, y, x1, x2, y1, y2)) {

        cout << " A point with given coordinates belongs to a rectangle with given vertex coordinates:  ";
        cout << boolalpha << Calculation(x, y, x1, x2, y1, y2);
    }
    else {
        // error notification
        cout << " Wrong!";
    }
}
//task3
void integer11()
{
    solveinteger11();
}
int InputThreeIntegerNumber()
{
    cout << "   ***integer11*** " << endl;
    int three;//declaration of the variable 
    cout << " Enter a three-digit number : ";
    cin >> three; //input number
    if (cin && three > 99 && three < 1000)
    // condition if the number entered corretly
    {

        return three;
    }
    else {
        // error notification
        return -1;
    }
}
void Calculation(int three) {
    int a = 0;
    int b = 0;
    int c = 0;
    //calculation task3
    a = three / 100;
    b = (three / 10) % 10;
    c = (three - (a * 100) - (b * 10));

    int sum = (a + b + c);
    int multiplying = a * b * c;
    OutputResult(sum, multiplying);
}
void OutputResult(int sum, int multiplying) {
    // output results
    cout << " Sum: " << sum << endl;
    cout << " Multiplying :  " << multiplying;
}
void solveinteger11() {
    // final decision
    int three = InputThreeIntegerNumber();
    if (three > 0)
    {
        Calculation(three);
    }
    else {
        // error notification
        cout << " Wrong! ";
    }
}
//task finish
