#include<iostream>
using namespace std;

//divolop a cpp program using functions to input 3 numbers and display the avg
int num1,num2,tot,avg;
void input()
{
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    
}

void calculate()
{
    tot = num1 + num2;
    avg = tot / 2;
}
void display()
{
    cout << "Total is " << tot;
    cout << "Average is " << avg;
}

int main ()
{
    input();
    calculate();
    display();

}