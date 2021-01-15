#include<iostream>

using namespace std;

int main(){

        int dollar,cent,quarter,dime,nickel,penny,rem;

        cout<<"Enter value of dollar\n";
        cin>>dollar;
        cout<<"Enter value of cents\n";
        cin>>cent;

        quarter = (dollar*4) + cent/25;
        rem = cent%25;
        dime = rem/10;
        rem = rem%10;
        nickel = rem/5;
        penny = rem%5;

        cout<<"coins are "<<quarter<<"quarters "<<dime<<" dimes"<<nickel<<"nickel "<<penny<<" pennies";
        return 0;
}
