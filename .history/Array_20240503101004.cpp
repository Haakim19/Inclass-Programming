#include<iostream>
using namespace std;
int main()
{
    //an array is a data structure which can store fixed size sequenctial that can can be same data type
   
//Question 
//develop a cpp program to insert ict marks of 10 student to an array ,and display the marks wich are marks>50
    int student[10];
    for (int marks=0 ; marks<10 ; marks++)
    {
        cout << "Enter the Marks: ";
        cin >> student[marks];
    }
    for (int marks=0 ; marks <10 ; marks++)
    {
        if (marks>50)
        {
            cout << student[marks];
        }
    }
}