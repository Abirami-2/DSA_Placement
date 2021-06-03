// relational Operators are: >, <, >=, <=, != 
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
        int num1,num2;
        cout<<"Input Two Numbers: "<<endl;
        cin>>num1>>num2;

        if(num1>num2){
            cout<<num1<<" is greater than "<<num2<<endl;
        }else if(num2>num1){
            cout<<num2<<" is greater than "<<num1<<endl;
        }
     return 0;
}