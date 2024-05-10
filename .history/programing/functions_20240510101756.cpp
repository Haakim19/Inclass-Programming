#include<iostream>
using namespace std;

//develop a cpp program using functions to input 3 numbers and display the avg
int num1,num2,tot,avg;
float input()
{
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    return num1,num2;
}

float calculate()
{
    tot = num1 + num2;
    avg = tot / 2;
    float avg1 = static_cast<float>(avg) ;
    return tot,avg1;
}
float display()
{
    cout << "Total is " << tot << endl;
    cout << "Average is " << avg << endl;
    return 0;
}

int main ()
{
    input();
    calculate();
    display();
    return 0;
}