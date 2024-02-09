/* Write a program that prompts the user to enter the hourly rate,
 the total consulting time, and whether the person has low income. 
 The program should output the billing amount. 
 Your program must contain a function that takes as input the hourly rate, 
 the total consulting time, and a value indicating whether the person has low income. 
 The function should return the billing amount. Your program may prompt the user to 
 enter the consulting time in minutes.*/

#include <iostream>

using namespace std;
// Function declaration
double billing_amount(double hourly_rate, int consulting_time, char low_income);




int main(){
    double hourly_rate;
    int consulting_time;
    char low_income;

    cout << "Enter the hourly rate: ";
    cin >> hourly_rate;

    cout << "Enter the total consulting time (in minutes): ) ";
    cin >> consulting_time;

    cout << "Do you have low income? (y/n): ";\
    cin >> low_income;

    //The program should output the billing amount.
    cout << "The billing amount is: " << billing_amount(hourly_rate, consulting_time, low_income) << endl;


}

//functions definition
double billing_amount(double hourly_rate, int consulting_time, char low_income)
{
    /*If a person has low income (<= 25,000) and the consulting time is less than or 
    equal to 30 minutes, there are no charges; otherwise, the service charges are 40% 
    of the regular hourly rate for the time over 30 minutes.*/

    if (low_income == 'y' && consulting_time <= 30)
    {
        //nocharges
        cout << "No charges" << endl;
        return 0;
    }
    else if (low_income == 'y' && consulting_time > 30){
        cout << "Service charge '40%' of the regular hourly rate for the time over 30 minutes" << endl;
        double amount;
        hourly_rate = (hourly_rate * 0.40) + hourly_rate;
        amount = hourly_rate * consulting_time;
        
        return amount;
    }
    /*For others, if the consulting time is less than or equal to 20 minutes, 
    there are no service charges; otherwise, service charges are 70% of the 
    regular hourly rate for the time over 20 minutes.*/

    else if (low_income == 'n' && consulting_time <= 20) {
        cout << "no service charges" << endl;
        return 0;
    }
    else
    {
        cout << "Service charge '70%' of the regular hourly rate for the time over 20 minutes" << endl;
        double amount;
        hourly_rate = (hourly_rate * 0.70) + hourly_rate;
        amount = hourly_rate * consulting_time;
        
        return amount;
    }
}