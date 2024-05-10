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

*/
string item_name;
float item_price,quantity,tot,net_tot,discount;
char res;
void item_details();
float calculate_bill();
void final_bill();

int main ()
{
    do
    {
    
    item_details();

    float net_bill = calculate_bill();

    final_bill();
    cout << "DO YOU WANT TO ANOTHER BILL";
    cout << "YES 'Y' FOR CONTINUE";
    cin >> res ; 
    } while (res == 'Y');

    return 0;
}

void item_details()
{
    cout << "\t\n"<< "XYZ SUPER MARKET" << endl;
    cout << "Enter the item name: ";
    getline(cin, item_name);
    cout << "Enter the item price: ";
    cin >> item_price;
    cout << "Quantity of the product: ";
    cin >> quantity;
    
}

float calculate_bill()
{
    tot = item_price * quantity;

    if (tot > 10000)
        {
            discount = 0.1;
            net_tot = tot - (tot * discount) ;
        }
    else if (tot > 5000)
    {
        discount = 0.07;
        net_tot = tot - (tot * discount) ;
    }
    
    else if (tot >2500)
    {
        discount = 0.045;
        net_tot = tot - (tot * discount) ;
    }
    
    else
    {
        net_tot = tot;
    }

    return net_tot;

}

void final_bill()
{
    cout << "\n" << "------- FINAL BILL -------";
    cout << "ITEM NAME: " << item_name << endl;
    cout << "YOUR TOTAL AMOUNT IS :" << tot << endl;
    cout << "DISCOUNT IS: " << discount << endl;
    cout << "FINAL AMOUNT IS: " << net_tot << endl;
}