#include<iostream>
using namespace std;
int main()
{
    /*
    
    ****
    ****
    ****
    */
    
    int i,j,rows,columns;
    cout<<"enter the rows"<<endl;
    cin>>rows;
    cout<<"enter the columns"<<endl;
    cin>>columns;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            cout<<"*";
        }
        cout<<endl; 


    }
    return 0;    
}