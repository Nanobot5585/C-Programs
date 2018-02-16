/*William Chien 02/15/2018
This program calculates total payout of the sales and years-of-service bonus added on top of the yearly salary.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;

int main()
{
int baseSalary = 0;
int employmentYears = 0;
double bonus = 0;
double commission = 0;
double sales = 0;
double bonusPay = 0;
double commissionPayout = 0;
double totalPaycheck = 0;



    cout<<"What is your base salary?"<<endl;
    cin>>baseSalary;

    cout<<"How long have you been employed in years?"<<endl;
    cin>> employmentYears;

    if (employmentYears <= 5){
        bonus = 10 ;
    }
    else {
        bonus = 20 ;
    }

    cout <<"How much in sales have you made this month?" << endl;
    cin >> sales;

    if(sales >= 5000 ){
        commission = .03;
            if (sales >= 10000){
            commission = .06;
        }
    }

    else {
        commission = 0;
    }

    bonusPay = employmentYears * bonus;

    commissionPayout = sales * commission;

    totalPaycheck = baseSalary + bonusPay + commissionPayout;

    cout<<"You entered " << baseSalary << " as your base salary and "<< employmentYears <<" years of service." << endl;
    cout<<"Your bonus for years of employment is: "<< bonusPay << endl;
    cout<<"Your commission payout is : " << commissionPayout << endl;
    cout<<"Your total month paycheck is: "<<totalPaycheck<<endl;

    return 0;
}
