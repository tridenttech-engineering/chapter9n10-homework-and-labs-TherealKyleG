//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
void getPayment(int prin, double monthRate, int months){
    double monthPay = 0.0;
    monthPay = prin * monthRate / 
        (1 - pow(monthRate + 1, -months));
    cout<<"Monthly payment: $"<<monthPay<<endl;
}

int main()
{
    //declare variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;


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
   
      //assign values to calculate payments
    
    //display payments
    cout << fixed << setprecision(2) << endl; 
    cout << "Credit union payment: $" ;
         getPayment(carPrice - rebate,
        creditRate / 12, term * 12);
    cout << "Dealer payment: $";
        getPayment(carPrice, 
        dealerRate / 12, term * 12);
    
    return 0;
}//end of main function    

    //*****function definitions***

    //calculates and returns a monthly payment
   
 //end of getPayment function//*****function definition*****
