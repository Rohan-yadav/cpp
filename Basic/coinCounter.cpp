#include<iostream>

using namespace std;

int main(){

        float quarter,dime,nickel,penny,total;

        cout<<"Enter value of quarter:";
        cin>>quarter;
        cout<<"Enter number of dimes:";
        cin>>dime;
        cout<<"Enter number of nickels:";
        cin>>nickel;
        cout<<"Enter number of penny";
        cin>>penny;

        quarter=quarter*0.25;
        dime = dime*0.10;
        nickel = nickel*0.05;
        penny = penny*0.01;

        total = quarter+dime+nickel+penny;

        cout<<"Total dollar value is $"<<total;

}
