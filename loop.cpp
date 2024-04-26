#include <iostream>
#include <string>
using namespace std;
int main()
{
   //Q1. develop a cpp programm to input 10 numbers and desplay the total and avg

  int num=0,count=1,tot=0;
  float avg=0;
    while (count<=10)
    {
        cout<<"input numbers: ";
        cin >> num; 
        count+=1;
        tot+=num;
        avg=tot/3;
    }
  
cout<<"Total = "<<tot<<"\n" << "Avarage= "<<avg;

    return 0;

}
