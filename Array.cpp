#include<iostream>
using namespace std;
int main()
{
    //an array is a data structure which can store fixed size sequenctial that can can be same data type
   
//Question 
//develop a cpp program to insert ict marks of 10 student to an array ,and display the marks which are marks>50
   /* int student[10];
    for (int marks=0 ; marks<10 ; marks++)
    {
        cout << "Enter the Marks: ";
        cin >> student[marks];
    }
    for (int i=0 ; i <10 ; i++)
    {
        if (student[i]>50)
        {
            cout << student[i]<< endl;
        }
    }*/
    //develop a cpp program to insert 10 number to an array and display the numbers which are number>avg
    int number[10],total=0;
    float avg;
    for (int i=0 ; i<4 ; i++)
    {
        cout << "Enter Number- ";
        cin >> number[i];
        total+=number[i];
    }
    
    for (int a=0 ; a<4 ; a++)
    {
        
        if (total/4<number[a])
        {
            cout << number[a] <<endl;
        }
    }
    
}