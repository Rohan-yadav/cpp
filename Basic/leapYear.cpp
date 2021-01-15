#include<iostream>

using namespace std;

int main(){
        int year;
        cout<<"Enter year:\n";
        cin>>year;

        if((year%4==0 && year%100!=0) || year%400==0)
                cout<<"Year is leap year";
        else
                cout<<year<<" Year is not leap year";

        return 0;
}
