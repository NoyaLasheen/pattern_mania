/*

        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=n;j>=1;j--)
        if (j>i)
        {
            cout<<" "<<" ";
        }
        else
        cout<<j<<" ";
        for(j=2;j<=i;j++)
        cout<<j<<" ";
        cout<<endl;
    }
    
    return 0;
}