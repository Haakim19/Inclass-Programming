#include<iostream>
#include <string>
using namespace std;

/*
function 1 : accept item name , item price and quantity from the user.
function2 : calculate final total bill using the formulas.

            total bill = item price * quantity

discount rate - 
total bill > 10000
10% discount 
total bill > 5000
7% discount 
total bill > 2500
4.5% discount

function 3 : display the final bill.


string item_name;
float item_price,quantity,net_tot,discount;
char res;
void item_details();
float calculate_bill();
void final_bill();

int main ()
{
    while (res == 'Y'|| 'y')
    {
    
    item_details();

    float net_bill = calculate_bill();

    final_bill();
    cout << "DO YOU WANT TO ANOTHER BILL" << endl;
    cout << "YES 'Y' FOR CONTINUE:";
    cin >> res ; 
    } 

    return 0;
}

void item_details()
{
    cout << "\t\t"<< "----------XYZ SUPER MARKET----------" << endl;
    cout << "Enter the item name: ";
    cin.ignore();
    getline(cin, item_name);
    cout << "Enter the item price: ";
    cin >> item_price;
    cout << "Quantity of the product: ";
    cin >> quantity;
    
}

float calculate_bill()
{

    if (item_price * quantity > 10000)
        {
            discount = 0.1;
            net_tot = item_price * quantity - (item_price * quantity * discount) ;
        }
    else if (item_price * quantity > 5000)
    {
        discount = 0.07;
        item_price * quantity - (item_price * quantity * discount) ;
    }
    
    else if (item_price * quantity >2500)
    {
        discount = 0.045;
        net_tot = item_price * quantity - (item_price * quantity * discount) ;
    }
    
    else
    {
        net_tot = item_price * quantity;
    }

    return net_tot;

}

void final_bill()
{
    cout << "\n" << "------- FINAL BILL -------";
    cout << "ITEM NAME: " << item_name << endl;
    cout << "YOUR TOTAL AMOUNT IS :" << item_price * quantity << endl;
    cout << "DISCOUNT IS: " << discount << endl;
    cout << "FINAL AMOUNT IS: " << net_tot << endl;
}


float no1 , no2 , no3 ,avg ;
void set_data(float n1 , float n2 , float n3)
{
  no1 = n1;
  no2 = n2;
  no3 = n3;
}

void calculate_avg()
{
    avg = (no1 + no2 + no3) / 3;
}

void display()
{
    cout << "average is: " << avg << endl;
}

int main ()
{
    set_data(10 , 20 , 30);
    calculate_avg();
    display();
}*/

/*
function01: input marks of 10 student to an array
function 02: display all marks
function03: calculate the average 
function 04: display all marks which are above avg


*/

float all_marks[10];
float marks,avg,total;

void student_marks()
{
    for (int count = 0 ; count < 10 ; count++)
    {
        cout << "Enter your Subject " << count +1 << " marks : ";
        cin >> all_marks[count];
        total+= all_marks[count];
    }
    
}
void display__marks()
{
    for (int count =0 ; count < 10 ; count++)
    {
        cout << "Subject " << count+1 << " marks " << all_marks[count] << endl;
    }
}
void calculate_avg()
{
    avg = total / 10;
    cout << "Average marks: " << avg << endl;
}

void above_avg()
{
    for (int count = 0 ; count <10 ; count++)
        if (all_marks[count] > avg)
        {
            cout << "above avg marks: " << all_marks[count] << endl;
        }
}

int main ()
{
    student_marks();
    display__marks();
    calculate_avg();
    above_avg();
}