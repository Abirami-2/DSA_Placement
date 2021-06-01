#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int num1,num2;
    cout<<"Input Two Numbers: ";
    cin>>num1>>num2;

    char op;
    cout<<"Input a Operator: ";
    cin>>op;

    switch(op){
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        default:
            cout<<"Enter valid Operator value";
            break;
    }
    return 0;
}