//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by Kyle Gallagher on 03/24/2025

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getPayment(int price, double rate, int term) {
  return (price * rate) / (1 - pow(1 + rate, -term)); 
}
int main()
{    int carprice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;
    cout << "Car price (after any trade-in): ";
    cin >> carprice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;
    creditPayment = getPayment(carprice - rebate, creditRate / 12, term * 12);
    dealerPayment = getPayment(carprice, dealerRate / 12, term * 12);
    cout << fixed << setprecision(2) << endl;
    cout << "Credit union payment: $" << creditPayment << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;
        
return 0;
}