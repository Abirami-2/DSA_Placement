#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    if(num1>num2){
        int sum = num1++ - num2-- + num2++ - num1--;
        cout<<sum<<endl;
    }else if(num1<num2){
        int sum1 = num2++ + num1-- - num2-- + num1++;
        cout<<sum1<<endl;
    }
    return 0;
}