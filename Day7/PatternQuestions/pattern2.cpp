// Hollow Rectangle Pattern
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int row,col;
    cout<<"Enter rows and columns: "<<endl;
    cin>>row>>col;


    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}