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
    }
    //develop a cpp program to insert 10 number to an array and display the numbers which are number>avg
    int number[10],total=0;
    float avg;
    for (int i=0 ; i<10 ; i++)
    {
        cout << "Enter Number- ";
        cin >> number[i];
        total+=number[i];
    }
    
    for (int a=0 ; a<10  ; a++)
    {
        
        if (total/10<number[a])
        {
            cout << number[a] <<endl;
        }
    }*/
    

//Question
float amount[10],total=0,avg=0;
 int a=0;
for (int count=0 ; count <10 ; count ++)
{
    cout << "Enter the sales amount- ";
    cin >>amount[count];
    total+=amount[count];
}

cout << "Total amount of sales for 10 days-"<<total<<endl;

avg=total/10;

cout << "Average Amount- "<<avg<< endl;

for (int count=0 ; count <10 ; count++ )
{
   
    if (amount[count]<avg)
        cout << "Day" <<count+1 << amount[count]<<endl;
        
    else
    a+=1;
    
}
cout << "Total Days which above the average"<<a<< endl;

























}