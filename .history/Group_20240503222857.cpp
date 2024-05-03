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
    int maximum = 0,minimum = 0 , num = 0,count;
    for (int count = 0 ; count < 10 ; count++)
    {
        cout << "Enter price - ";
        cin >> price[count];
        total+=price[count];//total=total+price[count]

    }
    maximum = price [0];
    minimum = price [0];

    for(int count = 0 ; count < 10 ; count++)
    {
        cout <<"-Price "<<count+1<<"-"<<price[count]<<endl;
    }
    cout << "-Total Price - "<< total<< endl;

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
            {
                minimum = price[count];
            }  
        if (maximum < price[count])
         {
            maximum = price[count];
         } 
    }
   
  

    cout << "-Minimum Price- " << minimum<< endl;
    cout << "-Maximum Price- " << maximum << endl; 


 return 0;
}

/*
Kurunegala Municipal council wants to decide on an approach to limit the number of vehicles 
entered into the city to minimize unnecessary traffic caused by private owned vehicles. You
are required to develop a CPP program to count the number of vehicles and average number
of passengers for a vehicle as part of their survey. The program should be able to accept vehicle
number and number of passengers for each vehicle entered into the city until the user enters 0
for vehicle number. The program should display the number of vehicles and average number
of passengers per vehicle.
*/
/*#include<iostream>
using namespace std;
int main()
{
    int number_of_vehicles = 0 , number_of_passengers=0 , vehicle_number = 0 , tot_vehicles = 0 , tot_passengers = 0 , avg = 0;
    char choice;
    do
    {   cout << "Enter Y to continue 0 to end: ";
        cin >> choice ;
        if (choice == 0)
         {
            break;
         }
        
        else if (choice == 'Y' || 'y')
        {
            cout << "vehicle number : ";
            cin >> vehicle_number;
            cout << "Number of passengers: ";
            cin >> number_of_passengers;
            tot_passengers+= number_of_passengers;
            tot_vehicles+=1;
        }
      
    }  while (choice == 'Y' || 'y');
    
    avg = tot_passengers / tot_vehicles;

    cout << "Total vehicle: " << tot_vehicles;
    cout << "Average number of passenger per vehicle: " << avg ;

return 0;
}*/
