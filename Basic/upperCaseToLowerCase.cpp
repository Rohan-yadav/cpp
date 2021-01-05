//Program to convert upper case latter to lower case
#include<iostream>

using namespace std;

int main(){

        int offset;
        char lower,upper;

        cout<<"Enter upper case character: ";
        cin>>upper;
        lower = (char)upper + 32;
        cout<<"Lower case is :"<<lower;

}
