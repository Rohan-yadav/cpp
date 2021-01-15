#include<iostream>

using namespace std;

int main(){

        double arg1,arg2,res;
        char op;

        cout<<"enter aguement1 operation arguement by sequence\n";
        cin>>arg1>>op>>arg2;

        switch(op) {
                case '/':
                        res = arg1/arg2;
                        cout<<arg1<<"/"<<arg2<<" = "<<res;
                        break;
                case '*':
                        res = arg1*arg2;
                        cout<<arg1<<"*"<<arg2<<" = "<<res;
                        break;
                case '+':
                        res = arg1+arg2;
                        cout<<arg1<<"+"<<arg2<<" = "<<res;
                        break;
                case '-':
                        res = arg1-arg2;
                        cout<<arg1<<"-"<<arg2<<" = "<<res;
                        break;
                default:
                        cout<<"Entered expression is invalid";
                        break;
        }
        return 0;
}
