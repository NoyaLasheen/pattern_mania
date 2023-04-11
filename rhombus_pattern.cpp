/*

   ****
  **** 
 ****  
****

*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number of rows: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i ||j>2*n-i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}