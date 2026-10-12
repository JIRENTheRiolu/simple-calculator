#include <iostream>
using namespace std;

int main () {
    char op;
    double num1;
    double num2;
    double result;

    cout<<"********************** CACULATOR *******************\n";

    cout<<"Enter either (+ - * /): ";
    cin>>op;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    switch(op){
        case '+':
            result=num1+num2;
            cout<<"result: "<<result<<"\n";
            break;
        case '-':
            result=num1-num2;
            cout<<"result: "<<result<<"\n";
            break;
        case '*':
            result=num1*num2;
            cout<<"result: "<<result<<"\n";
            break;
        case '/':
            result=num1/num2;
            cout<<"result: "<<result<<"\n";
            break;
        default:
            cout<<"That wasn't a valid response.\n";
            break;
    }

    cout<<"****************************************************";

    return 0;
}