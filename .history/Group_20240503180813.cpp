/*
An online store needs to track the prices of various products. Write a CPP program to create an
array and insert prices of 10 products. Calculate and display the followings:
1. Display all the prices.
2. Calculate and display the total price amount of all 10 products,
3. Display the maximum price and minimum price.
4. Display the total count of prices which are below the average.
*/
#include<iostream>
using namespace std;
int main ()
{
    float price[10],total = 0,avg = 0, a = 0;
    int maximum = 0,minimum = 0;
    for (int count = 0 ; count < 10 ; count++)
    {
        cout << "Enter price - ";
        cin >> price[count];
        total+=price[count];//total=total+price[count]

    }

    for(int count = 0 ; count < 10 ; count++)
    {
        cout <<"-Price "<<count+1<<"-"<<price[count]<<endl;
    }
    cout << "-Total Price- "<< total<< endl;
    avg=total/10;
    cout << "-Average- "<< avg << endl;

    for (int count = 0 ; count < 10 ; count ++)
    {   
        if (price[count]<avg)
            a+=1;
    }
    cout << "-Prices are below average-" << a << endl;
    for (int count = 0 ; count < 10 ; count++)
    {
        if (minimum > price[count])
            minimum = price[count];
        
        if (maximum < price[count])
            maximum = price[count];
    }

    cout << "-Minimum Price- " << minimum << endl;
    cout << "-Maximum Price- " << maximum << endl; 






}

