//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by Kyle Gallagher on 03/24/2025

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
double getPayment(int, double, int);

int main()
{
    //declare variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;

    //call function to calculate payments
    creditPayment = getPayment(carPrice - rebate,
        creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, 
        dealerRate / 12, term * 12);    //assign values to calculate payments
    
    //display payments
    cout << fixed << setprecision(2) << endl; 
    cout << "Credit union payment: $" 
        << creditPayment << endl;
    cout<< "Credi Union total: $" << ((creditPayment * 12)+(0.025)) * 4 << endl;
    cout << "Dealer payment: $"
        << dealerPayment << endl;
     cout<< "Dealer Total: $" << ((dealerPayment * 12)+(0.01)) * 4 << endl;
    return 0;
}//end of main function    

    //*****function definitions*****
double getPayment(int prin,
                  double monthRate, 
                  int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    double den = (1 - pow(monthRate + 1, -months));
    monthPay = prin * monthRate / den
        ;
    if (den == 0){
        monthPay = -1;
    }
    return monthPay;
} //end of getPayment function//*****function definition*****
