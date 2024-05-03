#include <iostream>
using namespace std;

int main() {
    float price[10], total = 0, avg = 0, a = 0;
    int maximum = 0, minimum = INT_MAX; // Initialize minimum with maximum possible value

    for (int count = 0; count < 10; count++) {
        cout << "Enter price - ";
        cin >> price[count];
        total += price[count];
    }

    for (int count = 0; count < 10; count++) {
        cout << "Price " << count + 1 << " - " << price[count] << endl;
    }
    
    cout << "Total Price - " << total << endl;
    avg = total / 10;
    cout << "Average - " << avg << endl;

    for (int count = 0; count < 10; count++) {
        if (price[count] < avg)
            a += 1;
    }

    cout << "Prices below average - " << a << endl;

    for (int count = 0; count < 10; count++) {
        if (minimum > price[count])
            minimum = price[count];
        
        if (maximum < price[count])
            maximum = price[count];
    }

    cout << "Minimum Price - " << minimum << endl;
    cout << "Maximum Price - " << maximum << endl;

    return 0;
}