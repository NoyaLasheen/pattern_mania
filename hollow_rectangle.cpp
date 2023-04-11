/*

*****
*   *
*   *
*****


*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,columns;
    cout<<"Enter rows and columns"<<endl;
    cin>>rows>>columns;
    for(i=1;i<=rows;i++)
    {
        for (j=1;j<=columns;j++)
        {
            if (i==1 || i==rows || j==1 || j==columns)
                cout<<"*";
            else
                cout<<" ";
            
        }
        cout<<endl;
    }

    
    return 0;
}

