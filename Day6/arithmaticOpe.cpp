#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int num1,num2;
    cout<<"Input Two Numbers: "<<endl;
    cin>>num1>>num2;

    char op;
    cout<<"Enter an Arithmatic Operator: "<<endl;
    cin>>op;
    switch(op){
        case '+':
            cout<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1/num2<<endl;
            break;
        default:
            cout<<"Sorry, wrong operator enter valid operator"<<endl;
            break;
    }
    return 0;
}