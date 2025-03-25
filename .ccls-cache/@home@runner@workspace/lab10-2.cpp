//Lab10-2.cpp - displays total owed
//Created/revised by Kyle Gallagher on 03/24/2015

#include <iostream>
#include <iomanip>
using namespace std;

void DisplayLine(){
    cout<<"------------------------------"<<endl;
}
void DisplayCompanyInfo(){
    cout<<"Macy's Company"<<endl;
    cout<<"710 Alton Way"<<endl;
    cout<<"Denver, CO 80230"<<endl;
    cout<<"Phone: (303) 340-7093"<<endl;
    cout<<"------------------------------"<<endl;
}
void DisplayTotals(double total){
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Total sales: $"<<total<<endl;
}
int main()
{
    //declare variables
    double store1sales = 0.0;
    double  store2sales= 0.0;
    double totalsales = 0.0;
    int days = 100;
    cout<<"Store 1 sales: ";
    cin>>store1sales;
    cout<<"Store 2 sales: ";
    cin>>store2sales;
    totalsales = days*(store1sales + store2sales-1);
    DisplayLine();
    DisplayCompanyInfo();
    DisplayLine();
    DisplayTotals(totalsales);
    return 0;
}